#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIFCLJJAOFJ.h"
class DDJKNPCIALI;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OAANAPGEDGE_BDBBOLPMGAM_OFFSET UNITYSDK_OFFSET(0x1AB519B0)
#define OAANAPGEDGE_CJPBDEOHOGF_OFFSET UNITYSDK_OFFSET(0x1AB51CC0)
#define OAANAPGEDGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1AB520A0)
#define OAANAPGEDGE_GCACNDFINNH_OFFSET UNITYSDK_OFFSET(0x1AB52010)
#define OAANAPGEDGE_HMGJEMBLELC_OFFSET UNITYSDK_OFFSET(0x1AB51AE0)
#define OAANAPGEDGE_KKFKKOPCLBG_OFFSET UNITYSDK_OFFSET(0x1AB51C00)

inline static constexpr unsigned int OAANAPGEDGE_TypeDefinitionIndex = 54883;

	class OAANAPGEDGE : public ::KIFCLJJAOFJ
	{
	public:
		::System::Collections::Generic::List_1<::DDJKNPCIALI*>* IHDKHABKMDI; // 0x20
		::RPG::GameCore::GameEntity* AKJFHPNOGEJ; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAANAPGEDGE_CTOR_OFFSET))(this);
		}

		::DDJKNPCIALI* BDBBOLPMGAM(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::DDJKNPCIALI*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + OAANAPGEDGE_BDBBOLPMGAM_OFFSET))(this, a1, a2);
		}

		::System::Void KKFKKOPCLBG(::DDJKNPCIALI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDJKNPCIALI*))((::PBYTE)hIl2Cpp + OAANAPGEDGE_KKFKKOPCLBG_OFFSET))(this, a1);
		}

		::System::Void HMGJEMBLELC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAANAPGEDGE_HMGJEMBLELC_OFFSET))(this);
		}

		static ::RPG::GameCore::GameEntity* CJPBDEOHOGF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OAANAPGEDGE_CJPBDEOHOGF_OFFSET))(a1);
		}

		::RPG::GameCore::GameEntity* GCACNDFINNH()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAANAPGEDGE_GCACNDFINNH_OFFSET))(this);
		}

	};
