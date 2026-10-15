#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KKPPDDOFADO.h"
namespace RPG::Client { class GridFightRole; }
namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define PKHOJDAHBOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC2BB3C0)
#define PKHOJDAHBOJ_LNEPAFGAPJH_OFFSET UNITYSDK_OFFSET(0xC2BB5F0)
#define PKHOJDAHBOJ_NGEJHKGHOEK_OFFSET UNITYSDK_OFFSET(0xC2BB490)

inline static constexpr unsigned int PKHOJDAHBOJ_TypeDefinitionIndex = 65137;

	class PKHOJDAHBOJ : public ::KKPPDDOFADO
	{
	public:
		::RPG::Client::GridFightRole* IAHCEGHHCKB; // 0x20
		::System::Void _ctor(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + PKHOJDAHBOJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void NGEJHKGHOEK(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + PKHOJDAHBOJ_NGEJHKGHOEK_OFFSET))(this, a1, a2);
		}

		::System::Void LNEPAFGAPJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHOJDAHBOJ_LNEPAFGAPJH_OFFSET))(this);
		}

	};
