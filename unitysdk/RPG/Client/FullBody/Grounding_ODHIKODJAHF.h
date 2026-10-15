#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::FullBody { class Grounding; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_ACDPBPKPKGE_OFFSET UNITYSDK_OFFSET(0xD06D3D0)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_CTOR_OFFSET UNITYSDK_OFFSET(0xD06D390)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_DBAKBGNBCLB_OFFSET UNITYSDK_OFFSET(0xD071A30)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_DMBJEGGOLGE_OFFSET UNITYSDK_OFFSET(0xD070E80)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_FCPAEPNHBCN_OFFSET UNITYSDK_OFFSET(0xD071680)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_FCPJFLFIDGE_OFFSET UNITYSDK_OFFSET(0xD071B40)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_FJPMGDEAAKI_OFFSET UNITYSDK_OFFSET(0xD070960)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_GET_HEIGHTFROMGROUND_OFFSET UNITYSDK_OFFSET(0xD06FFA0)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_GET_IKOFFSET_OFFSET UNITYSDK_OFFSET(0xD070010)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_GET_IKPOSITION_OFFSET UNITYSDK_OFFSET(0xD06FF40)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_GET_INITIATED_OFFSET UNITYSDK_OFFSET(0xD06FF80)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_GET_ISGROUNDED_OFFSET UNITYSDK_OFFSET(0xD06FF20)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xD06FFF0)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0xD06FFC0)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_HHLPGKJEFED_OFFSET UNITYSDK_OFFSET(0xD071970)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_IHMLDPHJGOB_OFFSET UNITYSDK_OFFSET(0xD071860)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_JBGIFBGMLMF_OFFSET UNITYSDK_OFFSET(0xD06D5E0)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_JINHMLFBMND_OFFSET UNITYSDK_OFFSET(0xD0705F0)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_KECLHMIIIMI_OFFSET UNITYSDK_OFFSET(0xD0700D0)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xD06ECE0)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_LIBMOGKALFC_OFFSET UNITYSDK_OFFSET(0xD071700)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_LOHDFFGFPIG_OFFSET UNITYSDK_OFFSET(0xD070030)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_OLALDPEMIPL_OFFSET UNITYSDK_OFFSET(0xD070710)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xD070140)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_PLLHEFBGKLE_OFFSET UNITYSDK_OFFSET(0xD0701E0)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_SET_HEIGHTFROMGROUND_OFFSET UNITYSDK_OFFSET(0xD06FFB0)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_SET_IKOFFSET_OFFSET UNITYSDK_OFFSET(0xD070020)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_SET_IKPOSITION_OFFSET UNITYSDK_OFFSET(0xD06FF60)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_SET_INITIATED_OFFSET UNITYSDK_OFFSET(0xD06FF90)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_SET_ISGROUNDED_OFFSET UNITYSDK_OFFSET(0xD06FF30)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xD070000)
#define RPG_CLIENT_FULLBODY_GROUNDING_ODHIKODJAHF_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0xD06FFE0)

namespace RPG::Client::FullBody
{
	class Grounding_ODHIKODJAHF : public ::System::Object
	{
	public:
		::RPG::Client::FullBody::Grounding* MDFCPEMDFDH; // 0x10
		::UnityEngine::Transform* _transform_k__BackingField; // 0x18
		::System::Single JKKIMOPDMIH; // 0x20
		::System::Single GBJBPHEGNDK; // 0x24
		::UnityEngine::RaycastHit EKHFJEBFHEC; // 0x28
		::UnityEngine::Vector3 _velocity_k__BackingField; // 0x58
		::UnityEngine::Vector3 FMAKHHPBKOE; // 0x64
		::System::Single _IKOffset_k__BackingField; // 0x70
		::System::Single _heightFromGround_k__BackingField; // 0x74
		::UnityEngine::Quaternion GHMIAHNLJAM; // 0x78
		::UnityEngine::Vector3 JJLCNDIKPBA; // 0x88
		::System::Boolean _isGrounded_k__BackingField; // 0x94
		::System::Boolean BHOHDMMMONI; // 0x95
		::System::Boolean _initiated_k__BackingField; // 0x96
		::System::Boolean GFLNEGNFDFJ; // 0x97
		::UnityEngine::RaycastHit IEBLNLLOELE; // 0x98
		::UnityEngine::Quaternion NOKLGNBJIBG; // 0xC8
		::UnityEngine::Vector3 BNGJBEHABJM; // 0xD8
		::UnityEngine::Vector3 _IKPosition_k__BackingField; // 0xE4
		::UnityEngine::Vector3 OGOAJIEJGHD; // 0xF0
		::UnityEngine::Quaternion JNBCGIOIHGA; // 0xFC
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
