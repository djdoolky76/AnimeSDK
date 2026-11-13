#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::FullBody { class Grounding; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_ACDPBPKPKGE_OFFSET UNITYSDK_OFFSET(0x1A7CE970)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1A7CE930)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_DBAKBGNBCLB_OFFSET UNITYSDK_OFFSET(0x1A7D3350)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_DMBJEGGOLGE_OFFSET UNITYSDK_OFFSET(0x1A7D2790)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_FCPAEPNHBCN_OFFSET UNITYSDK_OFFSET(0x1A7D2FB0)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_FCPJFLFIDGE_OFFSET UNITYSDK_OFFSET(0x1A7D3460)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_FJPMGDEAAKI_OFFSET UNITYSDK_OFFSET(0x1A7D2250)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_GET_HEIGHTFROMGROUND_OFFSET UNITYSDK_OFFSET(0x1A7D1860)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_GET_IKOFFSET_OFFSET UNITYSDK_OFFSET(0x1A7D18E0)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_GET_IKPOSITION_OFFSET UNITYSDK_OFFSET(0x1A7D1800)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_GET_INITIATED_OFFSET UNITYSDK_OFFSET(0x1A7D1840)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_GET_ISGROUNDED_OFFSET UNITYSDK_OFFSET(0x1A7D17E0)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A7D18C0)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1A7D1880)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_HHLPGKJEFED_OFFSET UNITYSDK_OFFSET(0x1A7D32A0)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_IHMLDPHJGOB_OFFSET UNITYSDK_OFFSET(0x1A7D3190)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_JBGIFBGMLMF_OFFSET UNITYSDK_OFFSET(0x1A7CEE30)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_JINHMLFBMND_OFFSET UNITYSDK_OFFSET(0x1A7D1ED0)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_KECLHMIIIMI_OFFSET UNITYSDK_OFFSET(0x1A7D19A0)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1A7D05B0)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_LIBMOGKALFC_OFFSET UNITYSDK_OFFSET(0x1A7D3030)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_LOHDFFGFPIG_OFFSET UNITYSDK_OFFSET(0x1A7D1900)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_OLALDPEMIPL_OFFSET UNITYSDK_OFFSET(0x1A7D1FF0)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x1A7D1A10)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_PLLHEFBGKLE_OFFSET UNITYSDK_OFFSET(0x1A7D1AB0)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_SET_HEIGHTFROMGROUND_OFFSET UNITYSDK_OFFSET(0x1A7D1870)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_SET_IKOFFSET_OFFSET UNITYSDK_OFFSET(0x1A7D18F0)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_SET_IKPOSITION_OFFSET UNITYSDK_OFFSET(0x1A7D1820)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_SET_INITIATED_OFFSET UNITYSDK_OFFSET(0x1A7D1850)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_SET_ISGROUNDED_OFFSET UNITYSDK_OFFSET(0x1A7D17F0)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A7D18D0)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1A7D18A0)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int Grounding_ODHIKODJAHF_TypeDefinitionIndex = 76391;

	class Grounding_ODHIKODJAHF : public ::System::Object
	{
	public:
		::RPG::Client::FullBody::Grounding* MDFCPEMDFDH; // 0x10
		::UnityEngine::Transform* _transform_k__BackingField; // 0x18
		::UnityEngine::Quaternion NOKLGNBJIBG; // 0x20
		::UnityEngine::RaycastHit IEBLNLLOELE; // 0x30
		::UnityEngine::Vector3 OGOAJIEJGHD; // 0x60
		::UnityEngine::Vector3 BNGJBEHABJM; // 0x6C
		::System::Single GBJBPHEGNDK; // 0x78
		::UnityEngine::Quaternion JNBCGIOIHGA; // 0x7C
		::UnityEngine::Vector3 _IKPosition_k__BackingField; // 0x8C
		::UnityEngine::Vector3 _velocity_k__BackingField; // 0x98
		::System::Boolean _isGrounded_k__BackingField; // 0xA4
		::System::Boolean BHOHDMMMONI; // 0xA5
		::System::Boolean GFLNEGNFDFJ; // 0xA6
		::System::Boolean _initiated_k__BackingField; // 0xA7
		::UnityEngine::Vector3 FMAKHHPBKOE; // 0xA8
		::System::Single JKKIMOPDMIH; // 0xB4
		::System::Single _IKOffset_k__BackingField; // 0xB8
		::UnityEngine::RaycastHit EKHFJEBFHEC; // 0xBC
		::UnityEngine::Vector3 JJLCNDIKPBA; // 0xEC
		::System::Single _heightFromGround_k__BackingField; // 0xF8
		::UnityEngine::Quaternion GHMIAHNLJAM; // 0xFC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_CTOR_OFFSET))(this);
		}

		::System::Boolean get_isGrounded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_GET_ISGROUNDED_OFFSET))(this);
		}

		::System::Void set_isGrounded(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_SET_ISGROUNDED_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_IKPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_GET_IKPOSITION_OFFSET))(this);
		}

		::System::Void set_IKPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_SET_IKPOSITION_OFFSET))(this, a1);
		}

		::System::Boolean get_initiated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_GET_INITIATED_OFFSET))(this);
		}

		::System::Void set_initiated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_SET_INITIATED_OFFSET))(this, a1);
		}

		::System::Single get_heightFromGround()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_GET_HEIGHTFROMGROUND_OFFSET))(this);
		}

		::System::Void set_heightFromGround(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_SET_HEIGHTFROMGROUND_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_velocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_GET_VELOCITY_OFFSET))(this);
		}

		::System::Void set_velocity(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_SET_VELOCITY_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_GET_TRANSFORM_OFFSET))(this);
		}

		::System::Void set_transform(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_SET_TRANSFORM_OFFSET))(this, a1);
		}

		::System::Single get_IKOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_GET_IKOFFSET_OFFSET))(this);
		}

		::System::Void set_IKOffset(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_SET_IKOFFSET_OFFSET))(this, a1);
		}

		::UnityEngine::RaycastHit LOHDFFGFPIG()
		{
			return ((::UnityEngine::RaycastHit(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_LOHDFFGFPIG_OFFSET))(this);
		}

		::System::Void KECLHMIIIMI(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_KECLHMIIIMI_OFFSET))(this, a1);
		}

		::System::Void ACDPBPKPKGE(::RPG::Client::FullBody::Grounding* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::Grounding*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_ACDPBPKPKGE_OFFSET))(this, a1, a2);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void JBGIFBGMLMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_JBGIFBGMLMF_OFFSET))(this);
		}

		::System::Single FCPAEPNHBCN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_FCPAEPNHBCN_OFFSET))(this);
		}

		::UnityEngine::RaycastHit FJPMGDEAAKI(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::RaycastHit(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_FJPMGDEAAKI_OFFSET))(this, a1);
		}

		::UnityEngine::RaycastHit DMBJEGGOLGE(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::RaycastHit(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_DMBJEGGOLGE_OFFSET))(this, a1);
		}

		::UnityEngine::RaycastHit PLLHEFBGKLE(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::RaycastHit(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_PLLHEFBGKLE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 IHMLDPHJGOB(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_IHMLDPHJGOB_OFFSET))(this, a1);
		}

		::System::Void JINHMLFBMND(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_JINHMLFBMND_OFFSET))(this, a1, a2);
		}

		::System::Void OLALDPEMIPL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_OLALDPEMIPL_OFFSET))(this, a1, a2, a3);
		}

		::System::Single HHLPGKJEFED(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_HHLPGKJEFED_OFFSET))(this, a1);
		}

		::System::Void LIBMOGKALFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_LIBMOGKALFC_OFFSET))(this);
		}

		::UnityEngine::Quaternion FCPJFLFIDGE()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_FCPJFLFIDGE_OFFSET))(this);
		}

		::System::Single DBAKBGNBCLB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_DBAKBGNBCLB_OFFSET))(this);
		}

	};
}
