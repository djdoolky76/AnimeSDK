#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OILICJACMFA.h"
class KFELGAIGHAP;
class OMOJEJPCLFB;
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OCHHONJPFDL_CTOR_OFFSET UNITYSDK_OFFSET(0xC6688D0)
#define OCHHONJPFDL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC6689E0)
#define OCHHONJPFDL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC668B40)

inline static constexpr unsigned int OCHHONJPFDL_TypeDefinitionIndex = 56217;

	class OCHHONJPFDL
	{
	public:
		::System::Collections::Generic::List_1<::OILICJACMFA>* AAECKGKGJFG; // 0x28
		::KFELGAIGHAP* CHOOMNGLJHI; // 0x30
		::KFELGAIGHAP* LNMOCNDILJN; // 0x38
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
