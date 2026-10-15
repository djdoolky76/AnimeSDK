#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPNFHKGKPGL;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define NICJMCOELEP_CTOR_OFFSET UNITYSDK_OFFSET(0xBBD8CD0)

inline static constexpr unsigned int NICJMCOELEP_TypeDefinitionIndex = 47062;

	class NICJMCOELEP : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::KPNFHKGKPGL*>* NIFEJPCFBDM; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* DNPGLFKBAGE; // 0x18
		::System::UInt32 HEGLPPNAHAE; // 0x20
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NICJMCOELEP_CTOR_OFFSET))(this, a1);
		}

	};
