#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FAGJFALFNLP;
class FEOHEGOIEJC;
class JBLCKECLODH;
namespace RPG::Client::FullBody { class FBIKChain; }
namespace RPG::Client::FullBody { class IKEffector; }
namespace RPG::Client::FullBody { class IKMappingLimb; }
namespace UnityEngine { class Transform; }

#define OCGGODBCLBO_CTOR_OFFSET UNITYSDK_OFFSET(0xC665420)
#define OCGGODBCLBO_GET_CHAIN_OFFSET UNITYSDK_OFFSET(0xC665400)
#define OCGGODBCLBO_GET_EFFECTOR_OFFSET UNITYSDK_OFFSET(0xC6653C0)
#define OCGGODBCLBO_GET_MAPPINGLIMB_OFFSET UNITYSDK_OFFSET(0xC6653E0)
#define OCGGODBCLBO_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC665550)
#define OCGGODBCLBO_SET_CHAIN_OFFSET UNITYSDK_OFFSET(0xC665410)
#define OCGGODBCLBO_SET_EFFECTOR_OFFSET UNITYSDK_OFFSET(0xC6653D0)
#define OCGGODBCLBO_SET_MAPPINGLIMB_OFFSET UNITYSDK_OFFSET(0xC6653F0)

inline static constexpr unsigned int OCGGODBCLBO_TypeDefinitionIndex = 70543;

	class OCGGODBCLBO : public ::System::Object
	{
	public:
		::RPG::Client::FullBody::FBIKChain* _Chain_k__BackingField; // 0x10
		::UnityEngine::Transform* MJEOHEEKBJM; // 0x18
		::FEOHEGOIEJC* GJLIDKDMIEK; // 0x20
		::RPG::Client::FullBody::IKMappingLimb* _MappingLimb_k__BackingField; // 0x28
		::FEOHEGOIEJC* OAMFLPIGGMK; // 0x30
		::FEOHEGOIEJC* JKFPNAHMIHP; // 0x38
		::FAGJFALFNLP* ANGPECFOEKG; // 0x40
		::FEOHEGOIEJC* LLBFJLFOFOO; // 0x48
		::RPG::Client::FullBody::IKEffector* _Effector_k__BackingField; // 0x50
		::FEOHEGOIEJC* DNOGHLIMDNI; // 0x58
		::JBLCKECLODH* JOAOMHBAIIL; // 0x60
		::UnityEngine::Transform* BINPONHFJMI; // 0x68
		::UnityEngine::Quaternion MDKPKLOEEMB; // 0x70
		::System::Single HBJCLDCNJEC; // 0x80
		::System::Single NCHIPMCELLL; // 0x84
		::System::Single KPIIEJBJMNJ; // 0x88
		::System::Single OHBAAMMACAE; // 0x8C
		::System::Single OEGJAFPDHNA; // 0x90
		::System::Single GFPCONPCNOD; // 0x94
		::UnityEngine::Vector3 NOCIBIPHFKP; // 0x98
		::System::Nullable_1<::UnityEngine::Vector3> IMJPIMGLOHI; // 0xA4
		::System::Byte _padding0[0x8];
		::System::Single GILLGDEBFGN; // 0xB4
		::System::Nullable_1<::UnityEngine::Quaternion> MJFMMNMIKCF; // 0xB8
		::System::Byte _padding1[0xC];
		::System::Single MKJJIHELDOF; // 0xCC
		::System::Single NGCANACGEIM; // 0xD0
		::System::Single JKFCLDLBJNG; // 0xD4
		::System::Single APAKCBFMCAB; // 0xD8
		::System::Boolean KKJLMNLCMBK; // 0xDC
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
