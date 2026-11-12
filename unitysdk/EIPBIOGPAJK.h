#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_Transform_OffsetType.h"
#include "unitysdk/RPG/Client/Effect_Transform_RotateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define EIPBIOGPAJK_CTOR_OFFSET UNITYSDK_OFFSET(0x16416080)

inline static constexpr unsigned int EIPBIOGPAJK_TypeDefinitionIndex = 58619;

	class EIPBIOGPAJK : public ::System::Object
	{
	public:
		::System::Single JKKLJBHDLEP; // 0x10
		::RPG::Client::Effect_Transform_RotateType HNJDGBAPOKJ; // 0x14
		::System::Single KFEINIHELMK; // 0x18
		::System::Single BNIBMFLIGGG; // 0x1C
		::UnityEngine::Vector3 NNAPIMNLNNG; // 0x20
		::System::Single IFGHNAGHONK; // 0x2C
		::System::Boolean BEHPKDOMNJA; // 0x30
		::System::Boolean NICHLEAMDBP; // 0x31
		::System::Byte _padding0[0x2];
		::System::Single NCMFHHENBFB; // 0x34
		::System::Single GLCJBMMCLPJ; // 0x38
		::System::Single LAPPELHAKBB; // 0x3C
		::System::Single OOOJMPPNKAP; // 0x40
		::System::Single JCKJGBKOAKJ; // 0x44
		::RPG::Client::Effect_Transform_OffsetType PKGAGGKHJDP; // 0x48
		::System::Single BLLKDCHFBAK; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIPBIOGPAJK_CTOR_OFFSET))(this);
		}

	};
