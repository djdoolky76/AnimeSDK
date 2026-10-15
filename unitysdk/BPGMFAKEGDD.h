#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DNFFEFPKDPC;
namespace UnityEngine { class Transform; }

#define BPGMFAKEGDD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DBA90)

inline static constexpr unsigned int BPGMFAKEGDD_TypeDefinitionIndex = 43221;

	class BPGMFAKEGDD : public ::System::Object
	{
	public:
		::UnityEngine::Transform* KIKINILBIEL; // 0x10
		::DNFFEFPKDPC* LCINDEDLCLG; // 0x18
		::System::Boolean OHKNGBNEFAG; // 0x20
		::System::Boolean BIMHNCPPFFK; // 0x21
		::System::Boolean EBCCMIMNJIG; // 0x22
		::System::Byte _padding0[0x1];
		::UnityEngine::Vector3 IKINMNCCKJI; // 0x24
		::System::Single CHBNGJFHAJM; // 0x30
		::System::Single HLLPHBNGHPK; // 0x34
		::UnityEngine::Vector2 DEOGFKAHBGP; // 0x38
		::System::Single JIPONFOAAPH; // 0x40
		::System::Single BKHMKLCPCDA; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGMFAKEGDD_CTOR_OFFSET))(this);
		}

	};
