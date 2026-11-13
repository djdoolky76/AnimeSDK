#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define NGAONJJLNME_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3E0E450)
#define NGAONJJLNME_EXECUTE_OFFSET UNITYSDK_OFFSET(0x3E0E460)
#define NGAONJJLNME_HFPJMFFFAFH_OFFSET UNITYSDK_OFFSET(0x3E0E440)
#define NGAONJJLNME_PBPMJBMJPPL_OFFSET UNITYSDK_OFFSET(0x18E84C80)

inline static constexpr unsigned int NGAONJJLNME_TypeDefinitionIndex = 73057;

	struct alignas(8) NGAONJJLNME
	{
		::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> MBBBHFDGJPN; // 0x10
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::System::Single> CMBDPCJBEJF; // 0x20
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> LPDFHNHCKLH; // 0x30
		::System::Byte _padding2[0x8];
		::System::Single GAFENHHEBPG; // 0x40
		::UnityEngine::Matrix4x4 DMIBMNOINJL; // 0x44
		::System::Single HBAMPJPOOLM; // 0x84
		::System::Single CPBLKCKCLLE; // 0x88
		::UnityEngine::Vector3 ACKEIJLGADO; // 0x8C
		::System::Single OHNIKINAHMJ; // 0x98
		::System::Single IDJGGKOIEMH; // 0x9C
		::System::Single CDHOOPAGGHA; // 0xA0
		::System::Single FGHNGICIFII; // 0xA4
		::Unity::Collections::NativeArray_1<::System::Single> ACJMCMJMLDO; // 0xA8
		::System::Byte _padding3[0x8];
		::UnityEngine::Matrix4x4 KEGAFKMLEPA; // 0xB8
		::System::Boolean FLMBGIDHIGE; // 0xF8
		::System::Void HFPJMFFFAFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAONJJLNME_HFPJMFFFAFH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAONJJLNME_DISPOSE_OFFSET))(this);
		}

		::System::Void Execute(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NGAONJJLNME_EXECUTE_OFFSET))(this, a1);
		}

		static ::System::Single PBPMJBMJPPL(::Unity::Collections::NativeArray_1<::System::Single> a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::Unity::Collections::NativeArray_1<::System::Single>, ::System::Single))((::PBYTE)hIl2Cpp + NGAONJJLNME_PBPMJBMJPPL_OFFSET))(a1, a2);
		}

	};
