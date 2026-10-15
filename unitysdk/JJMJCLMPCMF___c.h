#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJMJCLMPCMF;
namespace System { class Object; }

#define JJMJCLMPCMF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E761BC0)
#define JJMJCLMPCMF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E761C00)
#define JJMJCLMPCMF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E761C10)

	class JJMJCLMPCMF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x653D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJMJCLMPCMF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJMJCLMPCMF___C_CTOR_OFFSET))(this);
		}

		::JJMJCLMPCMF* __cctor_b__28_0()
		{
			return ((::JJMJCLMPCMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJMJCLMPCMF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
