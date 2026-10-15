#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMIOHCMPBJB;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceBaseTargetSelectorConfig; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DKOIGLHOGDH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5C7650)
#define DKOIGLHOGDH_HJJFOBGFBIO_OFFSET UNITYSDK_OFFSET(0x1C5BA3D0)

inline static constexpr unsigned int DKOIGLHOGDH_TypeDefinitionIndex = 37429;

	class DKOIGLHOGDH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>** StaticGet_JMAPGFDDINP()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>**)UnitySDK::FromName("", "DKOIGLHOGDH")->GetStaticField(0x68540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKOIGLHOGDH_CCTOR_OFFSET))();
		}

		static ::LMIOHCMPBJB* HJJFOBGFBIO(::System::Int32 a1, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig* a2, ::PBGNKMMDBGD* a3, ::System::Int32 a4)
		{
			return ((::LMIOHCMPBJB*(*)(::System::Int32, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + DKOIGLHOGDH_HJJFOBGFBIO_OFFSET))(a1, a2, a3, a4);
		}

	};
