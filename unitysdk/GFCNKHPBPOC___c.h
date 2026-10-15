#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFCNKHPBPOC;
namespace System { class Object; }

#define GFCNKHPBPOC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E461E10)
#define GFCNKHPBPOC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E461E50)
#define GFCNKHPBPOC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E461E60)

	class GFCNKHPBPOC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13010);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFCNKHPBPOC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCNKHPBPOC___C_CTOR_OFFSET))(this);
		}

		::GFCNKHPBPOC* __cctor_b__18_0()
		{
			return ((::GFCNKHPBPOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCNKHPBPOC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
