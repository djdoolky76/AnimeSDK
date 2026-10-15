#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPEGNCJDBOM;
namespace System { class Object; }

#define JPEGNCJDBOM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7D25A0)
#define JPEGNCJDBOM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D25E0)
#define JPEGNCJDBOM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E7D25F0)

	class JPEGNCJDBOM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xACE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPEGNCJDBOM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEGNCJDBOM___C_CTOR_OFFSET))(this);
		}

		::JPEGNCJDBOM* __cctor_b__33_0()
		{
			return ((::JPEGNCJDBOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEGNCJDBOM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
