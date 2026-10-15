#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KKPPDDOFADO.h"
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRoleStarConfig; }
namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define OOCDFIHJMOG_CTOR_OFFSET UNITYSDK_OFFSET(0xBF685C0)
#define OOCDFIHJMOG_LNEPAFGAPJH_OFFSET UNITYSDK_OFFSET(0xBF68820)
#define OOCDFIHJMOG_NGEJHKGHOEK_OFFSET UNITYSDK_OFFSET(0xBF686A0)

inline static constexpr unsigned int OOCDFIHJMOG_TypeDefinitionIndex = 65135;

	class OOCDFIHJMOG : public ::KKPPDDOFADO
	{
	public:
		::RPG::Client::GridFightRole* IAHCEGHHCKB; // 0x20
		::RPG::Client::GridFightRoleStarConfig* GFBHILKDOEB; // 0x28
		::System::Void _ctor(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + OOCDFIHJMOG_CTOR_OFFSET))(this, a1);
		}

		::System::Void NGEJHKGHOEK(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + OOCDFIHJMOG_NGEJHKGHOEK_OFFSET))(this, a1, a2);
		}

		::System::Void LNEPAFGAPJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCDFIHJMOG_LNEPAFGAPJH_OFFSET))(this);
		}

	};
