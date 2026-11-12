#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHJGACLHFDJ.h"
class GGJFAFONDHN;
class IOAJJFGGHAF;
namespace EnviromentSystemV2Space { class LLGKeyValuePairs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define PFJNGFLBJFO_BMCNGMBECOK_OFFSET UNITYSDK_OFFSET(0xCAF62E0)
#define PFJNGFLBJFO_CTOR_OFFSET UNITYSDK_OFFSET(0xCAF69C0)
#define PFJNGFLBJFO_DJLFAEMMMDK_OFFSET UNITYSDK_OFFSET(0xCAF6330)
#define PFJNGFLBJFO_HGHNADHAMOG_OFFSET UNITYSDK_OFFSET(0xCAF6830)
#define PFJNGFLBJFO_IBKMEFCDDHF_OFFSET UNITYSDK_OFFSET(0xCAF6820)
#define PFJNGFLBJFO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCAF6620)
#define PFJNGFLBJFO_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xCAF6720)

inline static constexpr unsigned int PFJNGFLBJFO_TypeDefinitionIndex = 50398;

	class PFJNGFLBJFO : public ::HHJGACLHFDJ
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* KKHBIELEAOB; // 0x28
		::IOAJJFGGHAF* ABJANJPBHEH; // 0x30
		::System::Boolean AMFHEJMFNJM; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFJNGFLBJFO_CTOR_OFFSET))(this);
		}

		::System::Void BMCNGMBECOK(::GGJFAFONDHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + PFJNGFLBJFO_BMCNGMBECOK_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFJNGFLBJFO_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + PFJNGFLBJFO_PKADDEPKJFN_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* IBKMEFCDDHF()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFJNGFLBJFO_IBKMEFCDDHF_OFFSET))(this);
		}

		::System::Void DJLFAEMMMDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFJNGFLBJFO_DJLFAEMMMDK_OFFSET))(this);
		}

		::System::Single HGHNADHAMOG(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PFJNGFLBJFO_HGHNADHAMOG_OFFSET))(this, a1);
		}

	};
