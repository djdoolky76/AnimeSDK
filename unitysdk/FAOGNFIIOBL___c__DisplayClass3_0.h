#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EANJILGOKBE;
class IOIIFAENPNH;

#define FAOGNFIIOBL___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15688A10)
#define FAOGNFIIOBL___C__DISPLAYCLASS3_0__TRYREMOVESHOWDATA_B__0_OFFSET UNITYSDK_OFFSET(0x15689360)
#define FAOGNFIIOBL___C__DISPLAYCLASS3_0__TRYREMOVESHOWDATA_B__1_OFFSET UNITYSDK_OFFSET(0x15689380)

inline static constexpr unsigned int FAOGNFIIOBL___c__DisplayClass3_0_TypeDefinitionIndex = 72076;

	class FAOGNFIIOBL___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::EANJILGOKBE* data; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOGNFIIOBL___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _TryRemoveShowData_b__0(::IOIIFAENPNH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IOIIFAENPNH*))((::PBYTE)hIl2Cpp + FAOGNFIIOBL___C__DISPLAYCLASS3_0__TRYREMOVESHOWDATA_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _TryRemoveShowData_b__1(::IOIIFAENPNH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IOIIFAENPNH*))((::PBYTE)hIl2Cpp + FAOGNFIIOBL___C__DISPLAYCLASS3_0__TRYREMOVESHOWDATA_B__1_OFFSET))(this, a1);
		}

	};
