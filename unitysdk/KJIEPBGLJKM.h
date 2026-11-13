#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAHBILOBJKI;
namespace Entitas { template <typename T> class IAllOfMatcher_1; }
namespace Entitas { template <typename T> class IAnyOfMatcher_1; }
namespace Entitas { template <typename T> class IMatcher_1; }

#define KJIEPBGLJKM_CKCLHJNCCLE_1_OFFSET UNITYSDK_OFFSET(0x1D631060)
#define KJIEPBGLJKM_CKCLHJNCCLE_OFFSET UNITYSDK_OFFSET(0x1D630FD0)
#define KJIEPBGLJKM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6310F0)
#define KJIEPBGLJKM_KCKGCBPHGBD_1_OFFSET UNITYSDK_OFFSET(0x1D630F40)
#define KJIEPBGLJKM_KCKGCBPHGBD_OFFSET UNITYSDK_OFFSET(0x1D630EB0)

inline static constexpr unsigned int KJIEPBGLJKM_TypeDefinitionIndex = 43810;

	class KJIEPBGLJKM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIEPBGLJKM_CTOR_OFFSET))(this);
		}

		static ::Entitas::IAllOfMatcher_1<::AAHBILOBJKI*>* KCKGCBPHGBD(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::Entitas::IAllOfMatcher_1<::AAHBILOBJKI*>*(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + KJIEPBGLJKM_KCKGCBPHGBD_OFFSET))(a1);
		}

		static ::Entitas::IAllOfMatcher_1<::AAHBILOBJKI*>* KCKGCBPHGBD_1(::Il2CppArray<::Entitas::IMatcher_1<::AAHBILOBJKI*>*>* a1)
		{
			return ((::Entitas::IAllOfMatcher_1<::AAHBILOBJKI*>*(*)(::Il2CppArray<::Entitas::IMatcher_1<::AAHBILOBJKI*>*>*))((::PBYTE)hIl2Cpp + KJIEPBGLJKM_KCKGCBPHGBD_1_OFFSET))(a1);
		}

		static ::Entitas::IAnyOfMatcher_1<::AAHBILOBJKI*>* CKCLHJNCCLE(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::Entitas::IAnyOfMatcher_1<::AAHBILOBJKI*>*(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + KJIEPBGLJKM_CKCLHJNCCLE_OFFSET))(a1);
		}

		static ::Entitas::IAnyOfMatcher_1<::AAHBILOBJKI*>* CKCLHJNCCLE_1(::Il2CppArray<::Entitas::IMatcher_1<::AAHBILOBJKI*>*>* a1)
		{
			return ((::Entitas::IAnyOfMatcher_1<::AAHBILOBJKI*>*(*)(::Il2CppArray<::Entitas::IMatcher_1<::AAHBILOBJKI*>*>*))((::PBYTE)hIl2Cpp + KJIEPBGLJKM_CKCLHJNCCLE_1_OFFSET))(a1);
		}

	};
