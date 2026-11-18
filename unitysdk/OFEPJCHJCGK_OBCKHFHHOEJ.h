#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/OFEPJCHJCGK_LGOKMHJKGKM.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

class OFEPJCHJCGK;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define OFEPJCHJCGK_OBCKHFHHOEJ_FPHJAFGDHPC_OFFSET UNITYSDK_OFFSET(0xFB84480)
#define OFEPJCHJCGK_OBCKHFHHOEJ_LADMFCIJICB_OFFSET UNITYSDK_OFFSET(0xFB84550)
#define OFEPJCHJCGK_OBCKHFHHOEJ__CTOR_OFFSET UNITYSDK_OFFSET(0xFB84470)

inline static constexpr unsigned int OFEPJCHJCGK_OBCKHFHHOEJ_TypeDefinitionIndex = 70705;

class OFEPJCHJCGK_OBCKHFHHOEJ : public ::System::Object
{
public:
	::System::Action_3<::Foundation::AssetPath, ::System::Int32, ::System::Int32>* BJCMOCOOCND; // 0x10
	::OFEPJCHJCGK* KLHPEBKNIFB; // 0x18
	::System::UInt64 OEAJFMNPPNB; // 0x20
	::OFEPJCHJCGK_LGOKMHJKGKM AKEGOHABAAB; // 0x28
	::System::Int32 ABHBKFJKINO; // 0x2C
	::System::Int32 HDPEILDOICC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_OBCKHFHHOEJ__CTOR_OFFSET))(this);
	}

	::System::Void FPHJAFGDHPC(::UnityEngine::Object* EJCBEJMGFAJ, ::Foundation::AssetRequestHandle DMIAICJPPDL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_OBCKHFHHOEJ_FPHJAFGDHPC_OFFSET))(this, EJCBEJMGFAJ, DMIAICJPPDL);
	}

	::System::Void LADMFCIJICB(::Foundation::AssetPath OIIHCACKLHD, ::UnityEngine::GameObject* HEAJMIGHEHG)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_OBCKHFHHOEJ_LADMFCIJICB_OFFSET))(this, OIIHCACKLHD, HEAJMIGHEHG);
	}
};
