#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBEAIOBFHIG;

#define PBEAIOBFHIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1AAB8D30)
#define PBEAIOBFHIG_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x1AAB8CC0)
#define PBEAIOBFHIG_JJBGNJFCHPL_OFFSET UNITYSDK_OFFSET(0x1AAB8D40)

inline static constexpr unsigned int PBEAIOBFHIG_TypeDefinitionIndex = 73841;

	class PBEAIOBFHIG : public ::System::Object
	{
	public:
		static ::PBEAIOBFHIG** StaticGet_FLMODBLFAGD()
		{
			return (::PBEAIOBFHIG**)UnitySDK::FromName("", "PBEAIOBFHIG")->GetStaticField(0x6F800);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBEAIOBFHIG_CTOR_OFFSET))(this);
		}

		static ::PBEAIOBFHIG* GGBLHEHJBDO()
		{
			return ((::PBEAIOBFHIG*(*)())((::PBYTE)hIl2Cpp + PBEAIOBFHIG_GGBLHEHJBDO_OFFSET))();
		}

		::System::Void JJBGNJFCHPL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBEAIOBFHIG_JJBGNJFCHPL_OFFSET))(this, a1);
		}

	};
