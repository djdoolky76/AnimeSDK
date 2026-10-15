#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define AKUTILITIES_SHORTIDGENERATOR_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F61A1D0)
#define AKUTILITIES_SHORTIDGENERATOR_COMPUTE_OFFSET UNITYSDK_OFFSET(0x1F617E40)
#define AKUTILITIES_SHORTIDGENERATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1F61A4C0)
#define AKUTILITIES_SHORTIDGENERATOR_GET_HASHSIZE_OFFSET UNITYSDK_OFFSET(0x1F61A340)
#define AKUTILITIES_SHORTIDGENERATOR_SET_HASHSIZE_OFFSET UNITYSDK_OFFSET(0x1F61A2D0)

inline static constexpr unsigned int AkUtilities_ShortIDGenerator_TypeDefinitionIndex = 44853;

	class AkUtilities_ShortIDGenerator : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_s_mask()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "ShortIDGenerator")->GetStaticField(0x39A0);
		}

		static ::System::Byte* StaticGet_s_hashSize()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ShortIDGenerator")->GetStaticField(0x39A4);
		}

		// static const ::System::Object s_prime32; // 0x0
		// static const ::System::Object s_offsetBasis32; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKUTILITIES_SHORTIDGENERATOR_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKUTILITIES_SHORTIDGENERATOR_CTOR_OFFSET))(this);
		}

		static ::System::Byte get_HashSize()
		{
			return ((::System::Byte(*)())((::PBYTE)hIl2Cpp + AKUTILITIES_SHORTIDGENERATOR_GET_HASHSIZE_OFFSET))();
		}

		static ::System::Void set_HashSize(::System::Byte a1)
		{
			return ((::System::Void(*)(::System::Byte))((::PBYTE)hIl2Cpp + AKUTILITIES_SHORTIDGENERATOR_SET_HASHSIZE_OFFSET))(a1);
		}

		static ::System::UInt32 Compute(::System::String* a1)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + AKUTILITIES_SHORTIDGENERATOR_COMPUTE_OFFSET))(a1);
		}

	};
