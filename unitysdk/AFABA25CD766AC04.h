#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/B3A7F113FE1DE383.h"

class AB642D1382756991;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }

#define AFABA25CD766AC04_AF8178D479E067EC_OFFSET UNITYSDK_OFFSET(0x1B4E1A0)
#define AFABA25CD766AC04_B4B532F6B5A38784_OFFSET UNITYSDK_OFFSET(0x1B4D930)
#define AFABA25CD766AC04_BD35B438DBFC126A_OFFSET UNITYSDK_OFFSET(0x1B4E580)
#define AFABA25CD766AC04_F22559323A9F9347_OFFSET UNITYSDK_OFFSET(0x1B4E5D0)
#define AFABA25CD766AC04__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AFABA25CD766AC04_TypeDefinitionIndex = 2172;

class AFABA25CD766AC04 : public ::System::Object
{
public:
	::System::Int32 A63B979A53D8D9F5; // 0x10
	::System::Single A35C2904B1F00BB7; // 0x14

	::System::Boolean BD35B438DBFC126A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AFABA25CD766AC04_BD35B438DBFC126A_OFFSET))(this);
	}

	::System::Void F22559323A9F9347(::System::Int32 A7443E7D25D3D43B)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AFABA25CD766AC04_F22559323A9F9347_OFFSET))(this, A7443E7D25D3D43B);
	}

	::UnityEngine::B3A7F113FE1DE383 B4B532F6B5A38784(::UnityEngine::Camera* E929054BCEC2CE82, ::System::Single BDDF0F6C01956F38)
	{
		return ((::UnityEngine::B3A7F113FE1DE383(*)(::PVOID, ::UnityEngine::Camera*, ::System::Single))((::PBYTE)hIl2Cpp + AFABA25CD766AC04_B4B532F6B5A38784_OFFSET))(this, E929054BCEC2CE82, BDDF0F6C01956F38);
	}

	::System::Void AF8178D479E067EC(::System::Collections::Generic::List_1<::AB642D1382756991*>*& F4242D32F4411AAA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::AB642D1382756991*>*&))((::PBYTE)hIl2Cpp + AFABA25CD766AC04_AF8178D479E067EC_OFFSET))(this, F4242D32F4411AAA);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFABA25CD766AC04__CTOR_OFFSET))(this);
	}
};
