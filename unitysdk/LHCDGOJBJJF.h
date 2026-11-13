#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIFCLJJAOFJ.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/AttackTypeMask.h"
class BGMKDGACBNI;
class JENFBIIMILF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LHCDGOJBJJF_BDBBOLPMGAM_OFFSET UNITYSDK_OFFSET(0x1BCB9280)
#define LHCDGOJBJJF_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCB9B10)
#define LHCDGOJBJJF_IHNPPBLPHBD_1_OFFSET UNITYSDK_OFFSET(0x1BCB94B0)
#define LHCDGOJBJJF_IHNPPBLPHBD_2_OFFSET UNITYSDK_OFFSET(0x1BCB9800)
#define LHCDGOJBJJF_IHNPPBLPHBD_3_OFFSET UNITYSDK_OFFSET(0x1BCB98B0)
#define LHCDGOJBJJF_IHNPPBLPHBD_OFFSET UNITYSDK_OFFSET(0x1BCB93F0)
#define LHCDGOJBJJF_KKFKKOPCLBG_OFFSET UNITYSDK_OFFSET(0x1BCB9360)
#define LHCDGOJBJJF_NHGPJCHOIKJ_1_OFFSET UNITYSDK_OFFSET(0x1BCB99D0)
#define LHCDGOJBJJF_NHGPJCHOIKJ_OFFSET UNITYSDK_OFFSET(0x1BCB9660)
#define LHCDGOJBJJF_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0x1BCB91E0)

inline static constexpr unsigned int LHCDGOJBJJF_TypeDefinitionIndex = 54899;

	class LHCDGOJBJJF : public ::KIFCLJJAOFJ
	{
	public:
		::System::Collections::Generic::List_1<::JENFBIIMILF*>* BDHJNCCINCN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCDGOJBJJF_CTOR_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCDGOJBJJF_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void BDBBOLPMGAM(::JENFBIIMILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JENFBIIMILF*))((::PBYTE)hIl2Cpp + LHCDGOJBJJF_BDBBOLPMGAM_OFFSET))(this, a1);
		}

		::System::Void KKFKKOPCLBG(::JENFBIIMILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JENFBIIMILF*))((::PBYTE)hIl2Cpp + LHCDGOJBJJF_KKFKKOPCLBG_OFFSET))(this, a1);
		}

		::System::Boolean IHNPPBLPHBD(::RPG::GameCore::AttackType a1, ::RPG::GameCore::AttackType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AttackType, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + LHCDGOJBJJF_IHNPPBLPHBD_OFFSET))(this, a1, a2);
		}

		::System::Boolean IHNPPBLPHBD_1(::RPG::GameCore::AttackType a1, ::Il2CppArray<::RPG::GameCore::AttackType>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AttackType, ::Il2CppArray<::RPG::GameCore::AttackType>*))((::PBYTE)hIl2Cpp + LHCDGOJBJJF_IHNPPBLPHBD_1_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::AttackTypeMask NHGPJCHOIKJ(::RPG::GameCore::AttackType a1)
		{
			return ((::RPG::GameCore::AttackTypeMask(*)(::PVOID, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + LHCDGOJBJJF_NHGPJCHOIKJ_OFFSET))(this, a1);
		}

		static ::System::Boolean IHNPPBLPHBD_2(::BGMKDGACBNI* a1, ::RPG::GameCore::AttackType a2, ::RPG::GameCore::AttackType a3)
		{
			return ((::System::Boolean(*)(::BGMKDGACBNI*, ::RPG::GameCore::AttackType, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + LHCDGOJBJJF_IHNPPBLPHBD_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IHNPPBLPHBD_3(::BGMKDGACBNI* a1, ::RPG::GameCore::AttackType a2, ::Il2CppArray<::RPG::GameCore::AttackType>* a3)
		{
			return ((::System::Boolean(*)(::BGMKDGACBNI*, ::RPG::GameCore::AttackType, ::Il2CppArray<::RPG::GameCore::AttackType>*))((::PBYTE)hIl2Cpp + LHCDGOJBJJF_IHNPPBLPHBD_3_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::AttackTypeMask NHGPJCHOIKJ_1(::BGMKDGACBNI* a1, ::RPG::GameCore::AttackType a2)
		{
			return ((::RPG::GameCore::AttackTypeMask(*)(::BGMKDGACBNI*, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + LHCDGOJBJJF_NHGPJCHOIKJ_1_OFFSET))(a1, a2);
		}

	};
