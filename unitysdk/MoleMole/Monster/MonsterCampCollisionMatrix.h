#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Monster/SymmetryMatrixList.h"

class CIIBMFNMPCG;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX_GHCJFANAAGG_OFFSET UNITYSDK_OFFSET(0x1469EA50)
#define MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX_LEPHHNJFGIG_OFFSET UNITYSDK_OFFSET(0x1469EF60)
#define MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX_LMLJEIENPDH_1_OFFSET UNITYSDK_OFFSET(0x1469EB80)
#define MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX_LMLJEIENPDH_OFFSET UNITYSDK_OFFSET(0x1469E9C0)
#define MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX_OJKJJMKJFCP_OFFSET UNITYSDK_OFFSET(0x1469E8A0)
#define MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX__CTOR_OFFSET UNITYSDK_OFFSET(0x1469E670)

namespace MoleMole::Monster
{
	inline static constexpr unsigned int MonsterCampCollisionMatrix_TypeDefinitionIndex = 83411;

	class MonsterCampCollisionMatrix : public ::MoleMole::Monster::SymmetryMatrixList
	{
	public:
		// static const ::System::Int32 INVALID_CAMP_INDEX = -0x1; // 0x0
		::CIIBMFNMPCG* Drawer; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* ItemMap; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX__CTOR_OFFSET))(this);
		}

		::System::Void OJKJJMKJFCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX_OJKJJMKJFCP_OFFSET))(this);
		}

		::System::Boolean LMLJEIENPDH(::System::Int32 JFMIGODCPIP, ::System::Int32 LAMPEKOELIC)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX_LMLJEIENPDH_OFFSET))(this, JFMIGODCPIP, LAMPEKOELIC);
		}

		::System::Boolean LMLJEIENPDH_1(::System::Int32 JFMIGODCPIP, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* GECKIMNIFIK)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX_LMLJEIENPDH_1_OFFSET))(this, JFMIGODCPIP, GECKIMNIFIK);
		}

		::System::Int32 LEPHHNJFGIG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX_LEPHHNJFGIG_OFFSET))(this);
		}

		::System::Int32 GHCJFANAAGG(::System::Int32 OLNAFBAENGH)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX_GHCJFANAAGG_OFFSET))(this, OLNAFBAENGH);
		}
	};
}
