#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JHPHMGHKGEN_BEMHFPJIJME_OFFSET UNITYSDK_OFFSET(0xB9EB050)
#define JHPHMGHKGEN_CTOR_OFFSET UNITYSDK_OFFSET(0xB9EB090)

inline static constexpr unsigned int JHPHMGHKGEN_TypeDefinitionIndex = 50326;

	class JHPHMGHKGEN : public ::System::Object
	{
	public:
		::System::Int32 IGCDCFGJMCL; // 0x10
		::System::Boolean GAFOFIBMKKH; // 0x14
		static ::System::Int32* StaticGet_FNOLPPJAADO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JHPHMGHKGEN")->GetStaticField(0x164F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHPHMGHKGEN_CTOR_OFFSET))(this);
		}

		::System::Void BEMHFPJIJME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHPHMGHKGEN_BEMHFPJIJME_OFFSET))(this);
		}

	};
