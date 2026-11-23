#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"

class A394EA508D2DB2C7;
class EA4F9F7169911B38;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FC808CCE954B1DFC_B98A41CA96BAE7BE_OFFSET UNITYSDK_OFFSET(0x2831910)
#define FC808CCE954B1DFC__CTOR_OFFSET UNITYSDK_OFFSET(0x2831AA0)

inline static constexpr unsigned int FC808CCE954B1DFC_TypeDefinitionIndex = 16911;

class FC808CCE954B1DFC : public ::System::Object
{
public:
	::System::Int32 AF42E4E4A6C684AD; // 0x10
	::System::Int32 E487F9F8BE5F76E8; // 0x14
	::System::Int32 EBBA8872348AB0E9; // 0x18
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::EA4F9F7169911B38*>* A42A8231460C4A3F; // 0x20
	::System::Int32 B61951A38699198B; // 0x28
	::System::Byte _padding1[0x4];
	::A394EA508D2DB2C7* E958DFC4713F4D56; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FC808CCE954B1DFC__CTOR_OFFSET))(this);
	}

	::System::Void B98A41CA96BAE7BE(::System::Int32 A5887131B73E712B, ::UnityEngine::E8984F4E44AE20E5& BC3C1AE9373D53C2, ::UnityEngine::E8984F4E44AE20E5& ACE65B3696BBB2AB, ::UnityEngine::E8984F4E44AE20E5& BBD732C7EBDE4C9B, ::UnityEngine::E8984F4E44AE20E5& A858D91B320F8708, ::UnityEngine::E8984F4E44AE20E5& B1B1D545DDE45996, ::System::Single& F9178B1A6CFB1C7D)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::E8984F4E44AE20E5&, ::UnityEngine::E8984F4E44AE20E5&, ::UnityEngine::E8984F4E44AE20E5&, ::UnityEngine::E8984F4E44AE20E5&, ::UnityEngine::E8984F4E44AE20E5&, ::System::Single&))((::PBYTE)hIl2Cpp + FC808CCE954B1DFC_B98A41CA96BAE7BE_OFFSET))(this, A5887131B73E712B, BC3C1AE9373D53C2, ACE65B3696BBB2AB, BBD732C7EBDE4C9B, A858D91B320F8708, B1B1D545DDE45996, F9178B1A6CFB1C7D);
	}
};
