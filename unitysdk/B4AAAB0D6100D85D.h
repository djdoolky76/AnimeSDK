#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AB642D1382756991;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define B4AAAB0D6100D85D_AF8178D479E067EC_OFFSET UNITYSDK_OFFSET(0x1695750)
#define B4AAAB0D6100D85D_B238F9B30F8324C4_OFFSET UNITYSDK_OFFSET(0x16958A0)
#define B4AAAB0D6100D85D_BD35B438DBFC126A_OFFSET UNITYSDK_OFFSET(0x16957F0)
#define B4AAAB0D6100D85D_F22559323A9F9347_OFFSET UNITYSDK_OFFSET(0x1695840)
#define B4AAAB0D6100D85D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B4AAAB0D6100D85D_TypeDefinitionIndex = 404;

class B4AAAB0D6100D85D : public ::System::Object
{
public:
	::UnityEngine::Vector3 FAF8C63C9A83F6FA; // 0x10
	::System::Single EE72D2594FF0B04E; // 0x1C
	::System::Int32 A63B979A53D8D9F5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B4AAAB0D6100D85D__CTOR_OFFSET))(this);
	}

	::System::Boolean BD35B438DBFC126A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + B4AAAB0D6100D85D_BD35B438DBFC126A_OFFSET))(this);
	}

	::System::Void AF8178D479E067EC(::System::Collections::Generic::List_1<::AB642D1382756991*>*& F4242D32F4411AAA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::AB642D1382756991*>*&))((::PBYTE)hIl2Cpp + B4AAAB0D6100D85D_AF8178D479E067EC_OFFSET))(this, F4242D32F4411AAA);
	}

	::System::Boolean B238F9B30F8324C4(::UnityEngine::Vector3 BF7646B43BCFCBDC, ::System::Single F0CEBBB186782829, ::System::Int32 ED6A79BC42F10D49, ::System::Collections::Generic::List_1<::AB642D1382756991*>*& A42ACAFFFCA3E117)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Collections::Generic::List_1<::AB642D1382756991*>*&))((::PBYTE)hIl2Cpp + B4AAAB0D6100D85D_B238F9B30F8324C4_OFFSET))(this, BF7646B43BCFCBDC, F0CEBBB186782829, ED6A79BC42F10D49, A42ACAFFFCA3E117);
	}

	::System::Void F22559323A9F9347(::System::Int32 A7443E7D25D3D43B)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + B4AAAB0D6100D85D_F22559323A9F9347_OFFSET))(this, A7443E7D25D3D43B);
	}
};
