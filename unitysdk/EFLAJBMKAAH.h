#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChessDirection.h"
#include "unitysdk/RPG/Client/Prop/PinballPuzzleItemConfig.h"
#include "unitysdk/RPG/Client/Prop/PinballPuzzleItemType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EKFMIDBJDIA;
namespace RPG::Client::Prop { class PinballPuzzleBoard; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define EFLAJBMKAAH_BOMKIDJODCK_OFFSET UNITYSDK_OFFSET(0x13A58BD0)
#define EFLAJBMKAAH_CAGCHKJHMPD_OFFSET UNITYSDK_OFFSET(0x13A583C0)
#define EFLAJBMKAAH_CTOR_OFFSET UNITYSDK_OFFSET(0x13A578F0)
#define EFLAJBMKAAH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A57A20)
#define EFLAJBMKAAH_DPKPLDCMMCL_OFFSET UNITYSDK_OFFSET(0x13A57E00)
#define EFLAJBMKAAH_EILJCLCPNDM_OFFSET UNITYSDK_OFFSET(0x13A588A0)
#define EFLAJBMKAAH_GET_ITEMLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x13A58CE0)
#define EFLAJBMKAAH_GET_ITEMLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x13A58D20)
#define EFLAJBMKAAH_HEKBGEMOOAN_OFFSET UNITYSDK_OFFSET(0x13A587A0)
#define EFLAJBMKAAH_HJDKCIMALJD_OFFSET UNITYSDK_OFFSET(0x13A58AA0)
#define EFLAJBMKAAH_IFCNMIBPBOI_OFFSET UNITYSDK_OFFSET(0x13A58980)
#define EFLAJBMKAAH_IMLHMEFIAPC_OFFSET UNITYSDK_OFFSET(0x13A58E10)
#define EFLAJBMKAAH_JLNIGEMKDJH_OFFSET UNITYSDK_OFFSET(0x13A58860)
#define EFLAJBMKAAH_LFOMLHDHEEM_OFFSET UNITYSDK_OFFSET(0x13A58820)
#define EFLAJBMKAAH_LHOFDLKIFBF_1_OFFSET UNITYSDK_OFFSET(0x13A58610)
#define EFLAJBMKAAH_LHOFDLKIFBF_OFFSET UNITYSDK_OFFSET(0x13A58400)
#define EFLAJBMKAAH_LOPFOGPLFOO_OFFSET UNITYSDK_OFFSET(0x13A588F0)
#define EFLAJBMKAAH_MCKLBLOMNKG_OFFSET UNITYSDK_OFFSET(0x13A581B0)
#define EFLAJBMKAAH_MDHOEBJGLLA_OFFSET UNITYSDK_OFFSET(0x13A58B30)
#define EFLAJBMKAAH_MOPJLKIHIHP_OFFSET UNITYSDK_OFFSET(0x13A58E00)
#define EFLAJBMKAAH_MPIHMFLCDJM_OFFSET UNITYSDK_OFFSET(0x13A587E0)
#define EFLAJBMKAAH_NBNHGEJFBEH_OFFSET UNITYSDK_OFFSET(0x13A58D50)
#define EFLAJBMKAAH_NPIAFDJCIJH_OFFSET UNITYSDK_OFFSET(0x13A57BD0)
#define EFLAJBMKAAH_OOGEFEGLPAI_OFFSET UNITYSDK_OFFSET(0x13A57C60)
#define EFLAJBMKAAH_PODNPNFOBIO_OFFSET UNITYSDK_OFFSET(0x13A58210)
#define EFLAJBMKAAH_SET_ITEMLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x13A58D00)
#define EFLAJBMKAAH_SET_ITEMLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x13A58D40)

inline static constexpr unsigned int EFLAJBMKAAH_TypeDefinitionIndex = 78760;

	class EFLAJBMKAAH : public ::System::Object
	{
	public:
		::UnityEngine::Transform* LLKDMBLKFPM; // 0x10
		::RPG::GameCore::PropComponent* NKILIBDMOMC; // 0x18
		::UnityEngine::Transform* PDJGEDNLBKJ; // 0x20
		::RPG::Client::Prop::PinballPuzzleBoard* COAMCKILKPH; // 0x28
		::RPG::Client::Prop::PinballPuzzleItemConfig LINNGFPLHNF; // 0x30
		::UnityEngine::Transform* BLHPDCBMANF; // 0x68
		::System::Int32 FJCJFOBLIIK; // 0x70
		::UnityEngine::Vector3 _ItemLocalRotation_k__BackingField; // 0x74
		::System::Int32 FFHHEBOENME; // 0x80
		::RPG::Client::Prop::ChessDirection IFJHHDGEKGO; // 0x84
		::UnityEngine::Vector3 _ItemLocalPosition_k__BackingField; // 0x88
		::System::Int32 MLIMFKACJFK; // 0x94
		::System::Void _ctor(::RPG::Client::Prop::PinballPuzzleItemConfig a1, ::RPG::Client::Prop::PinballPuzzleBoard* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PinballPuzzleItemConfig, ::RPG::Client::Prop::PinballPuzzleBoard*))((::PBYTE)hIl2Cpp + EFLAJBMKAAH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLAJBMKAAH_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::Prop::PinballPuzzleItemType NPIAFDJCIJH()
		{
			return ((::RPG::Client::Prop::PinballPuzzleItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLAJBMKAAH_NPIAFDJCIJH_OFFSET))(this);
		}

		::System::Void OOGEFEGLPAI(::RPG::GameCore::PropComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + EFLAJBMKAAH_OOGEFEGLPAI_OFFSET))(this, a1);
		}

		::System::Void MCKLBLOMNKG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EFLAJBMKAAH_MCKLBLOMNKG_OFFSET))(this, a1);
		}

		::System::Void PODNPNFOBIO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EFLAJBMKAAH_PODNPNFOBIO_OFFSET))(this, a1);
		}

		::System::Boolean CAGCHKJHMPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLAJBMKAAH_CAGCHKJHMPD_OFFSET))(this);
		}

		::UnityEngine::Transform* LHOFDLKIFBF()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLAJBMKAAH_LHOFDLKIFBF_OFFSET))(this);
		}

		::UnityEngine::Transform* LHOFDLKIFBF_1(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EFLAJBMKAAH_LHOFDLKIFBF_1_OFFSET))(this, a1);
		}

		::System::Void HEKBGEMOOAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLAJBMKAAH_HEKBGEMOOAN_OFFSET))(this);
		}

		::System::Void MPIHMFLCDJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLAJBMKAAH_MPIHMFLCDJM_OFFSET))(this);
		}

		::System::Void LFOMLHDHEEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLAJBMKAAH_LFOMLHDHEEM_OFFSET))(this);
		}

		::System::Void JLNIGEMKDJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLAJBMKAAH_JLNIGEMKDJH_OFFSET))(this);
		}

		::System::String* EILJCLCPNDM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLAJBMKAAH_EILJCLCPNDM_OFFSET))(this);
		}

		::System::Void LOPFOGPLFOO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EFLAJBMKAAH_LOPFOGPLFOO_OFFSET))(this, a1);
		}

		::System::Void IFCNMIBPBOI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + EFLAJBMKAAH_IFCNMIBPBOI_OFFSET))(this, a1);
		}

		::System::Void DPKPLDCMMCL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLAJBMKAAH_DPKPLDCMMCL_OFFSET))(this);
		}

		::System::Void HJDKCIMALJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLAJBMKAAH_HJDKCIMALJD_OFFSET))(this);
		}

		::System::Void MDHOEBJGLLA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EFLAJBMKAAH_MDHOEBJGLLA_OFFSET))(this, a1);
		}

		::System::Void BOMKIDJODCK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EFLAJBMKAAH_BOMKIDJODCK_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_ItemLocalPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLAJBMKAAH_GET_ITEMLOCALPOSITION_OFFSET))(this);
		}

		::System::Void set_ItemLocalPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EFLAJBMKAAH_SET_ITEMLOCALPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_ItemLocalRotation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLAJBMKAAH_GET_ITEMLOCALROTATION_OFFSET))(this);
		}

		::System::Void set_ItemLocalRotation(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EFLAJBMKAAH_SET_ITEMLOCALROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 NBNHGEJFBEH()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLAJBMKAAH_NBNHGEJFBEH_OFFSET))(this);
		}

		::UnityEngine::Transform* MOPJLKIHIHP()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLAJBMKAAH_MOPJLKIHIHP_OFFSET))(this);
		}

		::RPG::GameCore::PropComponent* IMLHMEFIAPC()
		{
			return ((::RPG::GameCore::PropComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLAJBMKAAH_IMLHMEFIAPC_OFFSET))(this);
		}

	};
