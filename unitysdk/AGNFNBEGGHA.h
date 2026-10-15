#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class JNNNBNFMIPO;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AGNFNBEGGHA_CTOR_OFFSET UNITYSDK_OFFSET(0xCF44CC0)
#define AGNFNBEGGHA_JKEONEEPIHH_OFFSET UNITYSDK_OFFSET(0xCF44C60)
#define AGNFNBEGGHA_MOOAHPFMNBH_OFFSET UNITYSDK_OFFSET(0xCF43DD0)
#define AGNFNBEGGHA_OCMKINOCKNK_OFFSET UNITYSDK_OFFSET(0xCF43F70)
#define AGNFNBEGGHA_ONKHPOCEODP_OFFSET UNITYSDK_OFFSET(0xCF44060)
#define AGNFNBEGGHA_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xCF43D00)

inline static constexpr unsigned int AGNFNBEGGHA_TypeDefinitionIndex = 57056;

	class AGNFNBEGGHA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::JNNNBNFMIPO*>* LLPENEGBBNO; // 0x10
		::System::Int32 KJCFIHNNAPJ; // 0x18
		::System::Int32 AFLFJLHPPNA; // 0x1C
		::System::Int32 OLCHJKFECEO; // 0x20
		::System::Boolean CKOAGFJPGMC; // 0x24
		::System::Byte _padding0[0x3];
		::System::Single OMGBJNBDBFC; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNFNBEGGHA_CTOR_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNFNBEGGHA_PJPFIHFAHGO_OFFSET))(this);
		}

		::JNNNBNFMIPO* MOOAHPFMNBH()
		{
			return ((::JNNNBNFMIPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNFNBEGGHA_MOOAHPFMNBH_OFFSET))(this);
		}

		::System::Boolean OCMKINOCKNK(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + AGNFNBEGGHA_OCMKINOCKNK_OFFSET))(this, a1, a2);
		}

		::System::Boolean ONKHPOCEODP(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5, ::UnityEngine::Vector3 a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Single, ::System::Single, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AGNFNBEGGHA_ONKHPOCEODP_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean JKEONEEPIHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNFNBEGGHA_JKEONEEPIHH_OFFSET))(this);
		}

	};
