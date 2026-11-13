#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class OFAKEFLLHNP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENGFCDJAFCG_CTOR_OFFSET UNITYSDK_OFFSET(0x1880BC00)
#define ENGFCDJAFCG_KDINBNKPIJG_OFFSET UNITYSDK_OFFSET(0x1880B8A0)
#define ENGFCDJAFCG_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x1880B990)

inline static constexpr unsigned int ENGFCDJAFCG_TypeDefinitionIndex = 63947;

	class ENGFCDJAFCG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::OFAKEFLLHNP*>* IAFNNMFIMOI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGFCDJAFCG_CTOR_OFFSET))(this);
		}

		::System::Void KDINBNKPIJG(::Il2CppArray<::OFAKEFLLHNP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::OFAKEFLLHNP*>*))((::PBYTE)hIl2Cpp + ENGFCDJAFCG_KDINBNKPIJG_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint PKADDEPKJFN(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + ENGFCDJAFCG_PKADDEPKJFN_OFFSET))(this, a1);
		}

	};
