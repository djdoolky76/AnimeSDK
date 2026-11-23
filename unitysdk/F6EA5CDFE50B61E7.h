#pragma once
#include "unitysdk/unitysdk.h"

class FAB0F771EC039CE2;
namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine::UI { class Image; }

#define F6EA5CDFE50B61E7_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1B18DA0)
#define F6EA5CDFE50B61E7_AA0F96E02B99757C_OFFSET UNITYSDK_OFFSET(0x1B19140)
#define F6EA5CDFE50B61E7_B950FF9810FC6646_OFFSET UNITYSDK_OFFSET(0x1B18CD0)
#define F6EA5CDFE50B61E7_BFCEE111278C4278_OFFSET UNITYSDK_OFFSET(0x1B19230)
#define F6EA5CDFE50B61E7_EBCC43F81466677E_OFFSET UNITYSDK_OFFSET(0x1B190C0)
#define F6EA5CDFE50B61E7_EF7F6C1A68729166_OFFSET UNITYSDK_OFFSET(0x1B191B0)
#define F6EA5CDFE50B61E7_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1B19070)
#define F6EA5CDFE50B61E7__CTOR_OFFSET UNITYSDK_OFFSET(0x1B19340)

inline static constexpr unsigned int F6EA5CDFE50B61E7_TypeDefinitionIndex = 2099;

class F6EA5CDFE50B61E7
{
public:
	::System::UInt32 F516A9B1F20EEB4C; // 0x90
	::System::Byte _padding0[0x4];
	::System::Action_1<::System::UInt32>* E22F5ADE7C6A547A; // 0x98
	::ABC::UI::MonoButton* EB8854DCA0744CFA; // 0xA0
	::UnityEngine::UI::Image* BF2AD00186B2763B; // 0xA8
	::UnityEngine::Canvas* A5C3F2CB449C245F; // 0xB0
	::UnityEngine::UI::Image* B712CB1956385E13; // 0xB8
	::ABC::UI::MonoPrefabLoader* A83D37ED810667F6; // 0xC0
	::ABC::UI::MonoPrefabLoader* E917C818ABC29236; // 0xC8
	::ABC::UI::MonoLocalizedTmp* B235C3DE2D88BF6D; // 0xD0
	::ABC::UI::MonoLocalizedTmp* F0BB01A4D8C1707E; // 0xD8

	::System::Void AA0F96E02B99757C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F6EA5CDFE50B61E7_AA0F96E02B99757C_OFFSET))(this);
	}

	::System::Void EF7F6C1A68729166(::System::Action_1<::System::UInt32>* B73FA1C41E6A7981)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + F6EA5CDFE50B61E7_EF7F6C1A68729166_OFFSET))(this, B73FA1C41E6A7981);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F6EA5CDFE50B61E7__CTOR_OFFSET))(this);
	}

	::System::Void EBCC43F81466677E(::System::Boolean FD96BCA2122A7513)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + F6EA5CDFE50B61E7_EBCC43F81466677E_OFFSET))(this, FD96BCA2122A7513);
	}

	::System::Void B950FF9810FC6646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F6EA5CDFE50B61E7_B950FF9810FC6646_OFFSET))(this);
	}

	::System::Void BFCEE111278C4278(::FAB0F771EC039CE2* F220A2D27F7C6B6C)
	{
		return ((::System::Void(*)(::PVOID, ::FAB0F771EC039CE2*))((::PBYTE)hIl2Cpp + F6EA5CDFE50B61E7_BFCEE111278C4278_OFFSET))(this, F220A2D27F7C6B6C);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + F6EA5CDFE50B61E7_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F6EA5CDFE50B61E7_F6A675B119E39F53_OFFSET))(this);
	}
};
