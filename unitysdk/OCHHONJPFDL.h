#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OILICJACMFA.h"
class KFELGAIGHAP;
class OMOJEJPCLFB;
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OCHHONJPFDL_CTOR_OFFSET UNITYSDK_OFFSET(0xBD5CD20)
#define OCHHONJPFDL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD5CE30)
#define OCHHONJPFDL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD5CF90)

inline static constexpr unsigned int OCHHONJPFDL_TypeDefinitionIndex = 55041;

	class OCHHONJPFDL
	{
	public:
		::KFELGAIGHAP* LNMOCNDILJN; // 0x28
		::KFELGAIGHAP* CHOOMNGLJHI; // 0x30
		::System::Collections::Generic::List_1<::OILICJACMFA>* AAECKGKGJFG; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OMOJEJPCLFB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OMOJEJPCLFB*))((::PBYTE)hIl2Cpp + OCHHONJPFDL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHHONJPFDL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHHONJPFDL_ONTASKBEGIN_OFFSET))(this);
		}

	};
