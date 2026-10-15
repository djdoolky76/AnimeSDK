#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDIAALCMDNG;
class NGFHCJIAOLH;
class OAIPJANPCEK;
namespace Entitas { template <typename T> class IGroup_1; }

#define GHOJDJGEJNG_CTOR_OFFSET UNITYSDK_OFFSET(0x15A2D790)
#define GHOJDJGEJNG_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15A2D8C0)
#define GHOJDJGEJNG_KMANBNKPLJJ_OFFSET UNITYSDK_OFFSET(0x15A2DA30)

inline static constexpr unsigned int GHOJDJGEJNG_TypeDefinitionIndex = 77785;

	class GHOJDJGEJNG : public ::System::Object
	{
	public:
		::HDIAALCMDNG* EEFMDEHLLFI; // 0x10
		::OAIPJANPCEK* PDENFEFCAGN; // 0x18
		::Entitas::IGroup_1<::NGFHCJIAOLH*>* MBBMBOMFIGF; // 0x20
		::System::Void _ctor(::OAIPJANPCEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAIPJANPCEK*))((::PBYTE)hIl2Cpp + GHOJDJGEJNG_CTOR_OFFSET))(this, a1);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHOJDJGEJNG_EXECUTE_OFFSET))(this);
		}

		::System::Void KMANBNKPLJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHOJDJGEJNG_KMANBNKPLJJ_OFFSET))(this);
		}

	};
