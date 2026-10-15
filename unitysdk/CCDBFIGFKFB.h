#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
class FCLGKGNNJOA;
class FECDLDCCHPN;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CCDBFIGFKFB_CTOR_OFFSET UNITYSDK_OFFSET(0xC737DE0)
#define CCDBFIGFKFB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC738750)
#define CCDBFIGFKFB_EHFLDBMLBPM_OFFSET UNITYSDK_OFFSET(0xC737DF0)
#define CCDBFIGFKFB_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xC7385C0)

inline static constexpr unsigned int CCDBFIGFKFB_TypeDefinitionIndex = 74037;

	class CCDBFIGFKFB : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::FCLGKGNNJOA*>* DPAMPHMFKBG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCDBFIGFKFB_CTOR_OFFSET))(this);
		}

		::System::Void EHFLDBMLBPM(::System::Collections::Generic::IEnumerable_1<::System::Type*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*))((::PBYTE)hIl2Cpp + CCDBFIGFKFB_EHFLDBMLBPM_OFFSET))(this, a1);
		}

		::System::Void PKADDEPKJFN(::FECDLDCCHPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FECDLDCCHPN*))((::PBYTE)hIl2Cpp + CCDBFIGFKFB_PKADDEPKJFN_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCDBFIGFKFB_DISPOSE_OFFSET))(this);
		}

	};
