#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ACF10FE87B4C5617.h"

class B6AE86B8D9446EE4;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define BF3BF06F37375C0D_A765A1D14770A303_OFFSET UNITYSDK_OFFSET(0x27F85E0)
#define BF3BF06F37375C0D_AFD26589299477E4_OFFSET UNITYSDK_OFFSET(0x27F8760)
#define BF3BF06F37375C0D__CTOR_OFFSET UNITYSDK_OFFSET(0x27F8A90)

inline static constexpr unsigned int BF3BF06F37375C0D_TypeDefinitionIndex = 16783;

class BF3BF06F37375C0D : public ::System::Object
{
public:
	::System::Single EBDF12F433CF57FA; // 0x10
	::UnityEngine::ACF10FE87B4C5617 F51D9F75D664E541; // 0x14
	::UnityEngine::ACF10FE87B4C5617 E3EF600BA9804D99; // 0x54
	::UnityEngine::ACF10FE87B4C5617 B0F9AB6C0FEC7E7A; // 0x94
	::System::Int32 A813D1A43CCD0F31; // 0xD4
	::System::Int32 F33AF2E54B25F384; // 0xD8
	::UnityEngine::ACF10FE87B4C5617 E88D62F219831931; // 0xDC
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* EEF46053DCE989F8; // 0x120
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Material*>*>* A564362144AC7B15; // 0x128
	::System::Collections::Generic::List_1<::System::Object*>* E18C2B48DB50AA6C; // 0x130

	::System::Void AFD26589299477E4(::B6AE86B8D9446EE4* EA0D07F4EF21A5B5)
	{
		return ((::System::Void(*)(::PVOID, ::B6AE86B8D9446EE4*))((::PBYTE)hIl2Cpp + BF3BF06F37375C0D_AFD26589299477E4_OFFSET))(this, EA0D07F4EF21A5B5);
	}

	::System::Void A765A1D14770A303()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF3BF06F37375C0D_A765A1D14770A303_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF3BF06F37375C0D__CTOR_OFFSET))(this);
	}
};
