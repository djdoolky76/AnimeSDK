#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OCKCNOOHILK.h"
class FFOAFCPMFCA;
class HJEGNHEENDL;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define PCGOOGBNGCB_AOAPENOMDGP_OFFSET UNITYSDK_OFFSET(0xC904E90)
#define PCGOOGBNGCB_CTOR_OFFSET UNITYSDK_OFFSET(0xC904E80)
#define PCGOOGBNGCB_FGMGPEPOJGK_OFFSET UNITYSDK_OFFSET(0xC905250)
#define PCGOOGBNGCB_GPHJENMPJEA_OFFSET UNITYSDK_OFFSET(0xC904EE0)
#define PCGOOGBNGCB_NOALONLDJKG_OFFSET UNITYSDK_OFFSET(0xC9052C0)

inline static constexpr unsigned int PCGOOGBNGCB_TypeDefinitionIndex = 77023;

	class PCGOOGBNGCB : public ::System::Object
	{
	public:
		::HJEGNHEENDL* NBKMFHFDNOJ; // 0x10
		::FFOAFCPMFCA* GCFHKJJNIFH; // 0x18
		::System::Void _ctor(::FFOAFCPMFCA* a1, ::HJEGNHEENDL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FFOAFCPMFCA*, ::HJEGNHEENDL*))((::PBYTE)hIl2Cpp + PCGOOGBNGCB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean AOAPENOMDGP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGOOGBNGCB_AOAPENOMDGP_OFFSET))(this);
		}

		::System::Boolean FGMGPEPOJGK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGOOGBNGCB_FGMGPEPOJGK_OFFSET))(this);
		}

		::System::Boolean GPHJENMPJEA(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + PCGOOGBNGCB_GPHJENMPJEA_OFFSET))(this, a1);
		}

		::System::Boolean NOALONLDJKG(::OCKCNOOHILK a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCKCNOOHILK))((::PBYTE)hIl2Cpp + PCGOOGBNGCB_NOALONLDJKG_OFFSET))(this, a1);
		}

	};
