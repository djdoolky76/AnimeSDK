#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BADCAMHNGKA;
namespace System { class Object; }

#define BADCAMHNGKA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7B0720)
#define BADCAMHNGKA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B0760)
#define BADCAMHNGKA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7B0770)

inline static constexpr unsigned int BADCAMHNGKA___c_TypeDefinitionIndex = 31074;

	class BADCAMHNGKA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BADCAMHNGKA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BADCAMHNGKA___C_CTOR_OFFSET))(this);
		}

		::BADCAMHNGKA* __cctor_b__23_0()
		{
			return ((::BADCAMHNGKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BADCAMHNGKA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
