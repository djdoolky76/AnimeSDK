#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BundleUpdatePostFileOpItem; }
namespace RPG::Client { class IBundleUpdatePostFileOpItem; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ENLPCEFGHCJ_AIFJLBIEPFA_OFFSET UNITYSDK_OFFSET(0x155B29B0)
#define ENLPCEFGHCJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x155B30F0)
#define ENLPCEFGHCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x155B30E0)
#define ENLPCEFGHCJ_EAOCDOBNOOH_OFFSET UNITYSDK_OFFSET(0x155B2330)
#define ENLPCEFGHCJ_GPKCCLNFIBO_OFFSET UNITYSDK_OFFSET(0x155B28F0)
#define ENLPCEFGHCJ_JNGKBAHBKHI_OFFSET UNITYSDK_OFFSET(0x155B2B40)
#define ENLPCEFGHCJ_MHIBGHDOLAM_OFFSET UNITYSDK_OFFSET(0x155B2410)

inline static constexpr unsigned int ENLPCEFGHCJ_TypeDefinitionIndex = 61226;

	class ENLPCEFGHCJ : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_NEIMDKJOLOB()
		{
			return (::System::Object**)UnitySDK::FromName("", "ENLPCEFGHCJ")->GetStaticField(0x523D0);
		}

		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_GOBMLFPGJLH()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)UnitySDK::FromName("", "ENLPCEFGHCJ")->GetStaticField(0x523D8);
		}

		// static const ::System::String* KLFGNENIAMP; // 0x0
		// static const ::System::String* EEGJEMMEEDI; // 0x0
		// static const ::System::String* GOMMGNEGKNE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENLPCEFGHCJ_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENLPCEFGHCJ_CCTOR_OFFSET))();
		}

		static ::System::Boolean EAOCDOBNOOH(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ENLPCEFGHCJ_EAOCDOBNOOH_OFFSET))(a1);
		}

		static ::System::Void MHIBGHDOLAM(::RPG::Client::IBundleUpdatePostFileOpItem* a1)
		{
			return ((::System::Void(*)(::RPG::Client::IBundleUpdatePostFileOpItem*))((::PBYTE)hIl2Cpp + ENLPCEFGHCJ_MHIBGHDOLAM_OFFSET))(a1);
		}

		static ::System::Void GPKCCLNFIBO(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ENLPCEFGHCJ_GPKCCLNFIBO_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::BundleUpdatePostFileOpItem* AIFJLBIEPFA(::System::String* a1)
		{
			return ((::RPG::Client::BundleUpdatePostFileOpItem*(*)(::System::String*))((::PBYTE)hIl2Cpp + ENLPCEFGHCJ_AIFJLBIEPFA_OFFSET))(a1);
		}

		static ::System::Void JNGKBAHBKHI()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENLPCEFGHCJ_JNGKBAHBKHI_OFFSET))();
		}

	};
