#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FAGJFALFNLP;
class FEOHEGOIEJC;
class JBLCKECLODH;
namespace RPG::Client::FullBody { class FBIKChain; }
namespace RPG::Client::FullBody { class IKEffector; }
namespace RPG::Client::FullBody { class IKMappingLimb; }
namespace System { class Nullable; }
namespace UnityEngine { class Transform; }

#define OCGGODBCLBO_CTOR_OFFSET UNITYSDK_OFFSET(0xBD60A50)
#define OCGGODBCLBO_GET_CHAIN_OFFSET UNITYSDK_OFFSET(0xBD60A30)
#define OCGGODBCLBO_GET_EFFECTOR_OFFSET UNITYSDK_OFFSET(0xBD609F0)
#define OCGGODBCLBO_GET_MAPPINGLIMB_OFFSET UNITYSDK_OFFSET(0xBD60A10)
#define OCGGODBCLBO_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBD60B80)
#define OCGGODBCLBO_SET_CHAIN_OFFSET UNITYSDK_OFFSET(0xBD60A40)
#define OCGGODBCLBO_SET_EFFECTOR_OFFSET UNITYSDK_OFFSET(0xBD60A00)
#define OCGGODBCLBO_SET_MAPPINGLIMB_OFFSET UNITYSDK_OFFSET(0xBD60A20)

	class OCGGODBCLBO : public ::System::Object
	{
	public:
		::FEOHEGOIEJC* GJLIDKDMIEK; // 0x10
		::FEOHEGOIEJC* OAMFLPIGGMK; // 0x18
		::FAGJFALFNLP* ANGPECFOEKG; // 0x20
		::UnityEngine::Transform* BINPONHFJMI; // 0x28
		::UnityEngine::Transform* MJEOHEEKBJM; // 0x30
		::RPG::Client::FullBody::FBIKChain* _Chain_k__BackingField; // 0x38
		::RPG::Client::FullBody::IKMappingLimb* _MappingLimb_k__BackingField; // 0x40
		::FEOHEGOIEJC* JKFPNAHMIHP; // 0x48
		::FEOHEGOIEJC* DNOGHLIMDNI; // 0x50
		::FEOHEGOIEJC* LLBFJLFOFOO; // 0x58
		::RPG::Client::FullBody::IKEffector* _Effector_k__BackingField; // 0x60
		::JBLCKECLODH* JOAOMHBAIIL; // 0x68
		::UnityEngine::Vector3 NOCIBIPHFKP; // 0x70
		::System::Single APAKCBFMCAB; // 0x7C
		::System::Single GFPCONPCNOD; // 0x80
		::System::Single GILLGDEBFGN; // 0x84
		::System::Single NGCANACGEIM; // 0x88
		::System::Single OEGJAFPDHNA; // 0x8C
		::System::Boolean KKJLMNLCMBK; // 0x90
		::System::Byte _padding0[0x3];
		::System::Single NCHIPMCELLL; // 0x94
		::System::Single OHBAAMMACAE; // 0x98
		::System::Single JKFCLDLBJNG; // 0x9C
		::System::Nullable* MJFMMNMIKCF; // 0xA0
		::System::Byte _padding1[0xC];
		::System::Nullable* IMJPIMGLOHI; // 0xB4
		::System::Byte _padding2[0x8];
		::System::Single MKJJIHELDOF; // 0xC4
		::UnityEngine::Quaternion MDKPKLOEEMB; // 0xC8
		::System::Single HBJCLDCNJEC; // 0xD8
		::System::Single KPIIEJBJMNJ; // 0xDC
		::System::Void _ctor(::RPG::Client::FullBody::IKEffector* a1, ::RPG::Client::FullBody::IKMappingLimb* a2, ::RPG::Client::FullBody::FBIKChain* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKEffector*, ::RPG::Client::FullBody::IKMappingLimb*, ::RPG::Client::FullBody::FBIKChain*))((::PBYTE)hIl2Cpp + OCGGODBCLBO_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::FullBody::IKEffector* get_Effector()
		{
			return ((::RPG::Client::FullBody::IKEffector*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGGODBCLBO_GET_EFFECTOR_OFFSET))(this);
		}

		::System::Void set_Effector(::RPG::Client::FullBody::IKEffector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKEffector*))((::PBYTE)hIl2Cpp + OCGGODBCLBO_SET_EFFECTOR_OFFSET))(this, a1);
		}

		::RPG::Client::FullBody::IKMappingLimb* get_MappingLimb()
		{
			return ((::RPG::Client::FullBody::IKMappingLimb*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGGODBCLBO_GET_MAPPINGLIMB_OFFSET))(this);
		}

		::System::Void set_MappingLimb(::RPG::Client::FullBody::IKMappingLimb* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKMappingLimb*))((::PBYTE)hIl2Cpp + OCGGODBCLBO_SET_MAPPINGLIMB_OFFSET))(this, a1);
		}

		::RPG::Client::FullBody::FBIKChain* get_Chain()
		{
			return ((::RPG::Client::FullBody::FBIKChain*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGGODBCLBO_GET_CHAIN_OFFSET))(this);
		}

		::System::Void set_Chain(::RPG::Client::FullBody::FBIKChain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::FBIKChain*))((::PBYTE)hIl2Cpp + OCGGODBCLBO_SET_CHAIN_OFFSET))(this, a1);
		}

		::System::Boolean PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OCGGODBCLBO_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
