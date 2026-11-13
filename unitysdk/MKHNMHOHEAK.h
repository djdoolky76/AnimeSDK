#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPCDEJGJHBK;

#define MKHNMHOHEAK_CGNOBOOCGNB_OFFSET UNITYSDK_OFFSET(0x1605FF90)
#define MKHNMHOHEAK_CTOR_OFFSET UNITYSDK_OFFSET(0x160600B0)
#define MKHNMHOHEAK_GET_PARENTENTITYVIEW_OFFSET UNITYSDK_OFFSET(0x16060090)
#define MKHNMHOHEAK_IGKLKLJCMBI_OFFSET UNITYSDK_OFFSET(0x1605FF40)
#define MKHNMHOHEAK_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x1605FFE0)
#define MKHNMHOHEAK_PJAGIJLDFIB_OFFSET UNITYSDK_OFFSET(0x16060040)
#define MKHNMHOHEAK_SET_PARENTENTITYVIEW_OFFSET UNITYSDK_OFFSET(0x160600A0)

inline static constexpr unsigned int MKHNMHOHEAK_TypeDefinitionIndex = 37777;

	class MKHNMHOHEAK : public ::System::Object
	{
	public:
		::KPCDEJGJHBK* _ParentEntityView_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKHNMHOHEAK_CTOR_OFFSET))(this);
		}

		::System::Void IGKLKLJCMBI(::KPCDEJGJHBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPCDEJGJHBK*))((::PBYTE)hIl2Cpp + MKHNMHOHEAK_IGKLKLJCMBI_OFFSET))(this, a1);
		}

		::System::Void CGNOBOOCGNB(::KPCDEJGJHBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPCDEJGJHBK*))((::PBYTE)hIl2Cpp + MKHNMHOHEAK_CGNOBOOCGNB_OFFSET))(this, a1);
		}

		::System::Void LJOLGCNKIEH(::KPCDEJGJHBK* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::KPCDEJGJHBK*, ::System::Single))((::PBYTE)hIl2Cpp + MKHNMHOHEAK_LJOLGCNKIEH_OFFSET))(this, a1, a2);
		}

		::System::Void PJAGIJLDFIB(::KPCDEJGJHBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPCDEJGJHBK*))((::PBYTE)hIl2Cpp + MKHNMHOHEAK_PJAGIJLDFIB_OFFSET))(this, a1);
		}

		::KPCDEJGJHBK* get_ParentEntityView()
		{
			return ((::KPCDEJGJHBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKHNMHOHEAK_GET_PARENTENTITYVIEW_OFFSET))(this);
		}

		::System::Void set_ParentEntityView(::KPCDEJGJHBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPCDEJGJHBK*))((::PBYTE)hIl2Cpp + MKHNMHOHEAK_SET_PARENTENTITYVIEW_OFFSET))(this, a1);
		}

	};
