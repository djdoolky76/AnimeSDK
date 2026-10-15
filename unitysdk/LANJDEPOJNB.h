#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/FIEBGAGBELM.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define LANJDEPOJNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC414C0)
#define LANJDEPOJNB_MMKGLLKFHCH_OFFSET UNITYSDK_OFFSET(0x1EC4E880)

inline static constexpr unsigned int LANJDEPOJNB_TypeDefinitionIndex = 44303;

	class LANJDEPOJNB : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::FIEBGAGBELM>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::FIEBGAGBELM>*))((::PBYTE)hIl2Cpp + LANJDEPOJNB_CTOR_OFFSET))(this, a1);
		}

		static ::System::String* MMKGLLKFHCH(::System::Collections::Generic::IEnumerable_1<::FIEBGAGBELM>* a1)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IEnumerable_1<::FIEBGAGBELM>*))((::PBYTE)hIl2Cpp + LANJDEPOJNB_MMKGLLKFHCH_OFFSET))(a1);
		}

	};
