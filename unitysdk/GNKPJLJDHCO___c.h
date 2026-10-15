#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNKPJLJDHCO;
namespace System { class Object; }

#define GNKPJLJDHCO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4B62D0)
#define GNKPJLJDHCO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4B6310)
#define GNKPJLJDHCO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E4B6320)

inline static constexpr unsigned int GNKPJLJDHCO___c_TypeDefinitionIndex = 34644;

	class GNKPJLJDHCO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21350);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNKPJLJDHCO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKPJLJDHCO___C_CTOR_OFFSET))(this);
		}

		::GNKPJLJDHCO* __cctor_b__33_0()
		{
			return ((::GNKPJLJDHCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKPJLJDHCO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
