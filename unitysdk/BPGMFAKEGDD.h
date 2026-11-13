#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DNFFEFPKDPC;
namespace UnityEngine { class Transform; }

#define BPGMFAKEGDD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D8400)

inline static constexpr unsigned int BPGMFAKEGDD_TypeDefinitionIndex = 44202;

	class BPGMFAKEGDD : public ::System::Object
	{
	public:
		::DNFFEFPKDPC* LCINDEDLCLG; // 0x10
		::UnityEngine::Transform* KIKINILBIEL; // 0x18
		::System::Single JIPONFOAAPH; // 0x20
		::System::Single BKHMKLCPCDA; // 0x24
		::System::Single HLLPHBNGHPK; // 0x28
		::System::Boolean OHKNGBNEFAG; // 0x2C
		::System::Boolean EBCCMIMNJIG; // 0x2D
		::System::Boolean BIMHNCPPFFK; // 0x2E
		::System::Byte _padding0[0x1];
		::UnityEngine::Vector3 IKINMNCCKJI; // 0x30
		::UnityEngine::Vector2 DEOGFKAHBGP; // 0x3C
		::System::Single CHBNGJFHAJM; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGMFAKEGDD_CTOR_OFFSET))(this);
		}

	};
