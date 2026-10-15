#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDHCJAOOKDB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define HGGENLBDAPM_ACOMBAFFJCH_OFFSET UNITYSDK_OFFSET(0x15C99A40)
#define HGGENLBDAPM_ADFIPDLKAMI_1_OFFSET UNITYSDK_OFFSET(0x15C99D60)
#define HGGENLBDAPM_ADFIPDLKAMI_2_OFFSET UNITYSDK_OFFSET(0x15C99E00)
#define HGGENLBDAPM_ADFIPDLKAMI_OFFSET UNITYSDK_OFFSET(0x15C99CA0)
#define HGGENLBDAPM_CCKNAMOGJJB_OFFSET UNITYSDK_OFFSET(0x15C99540)
#define HGGENLBDAPM_CTOR_OFFSET UNITYSDK_OFFSET(0x15C9A0C0)
#define HGGENLBDAPM_EJGPEMHBCMC_OFFSET UNITYSDK_OFFSET(0x15C99660)
#define HGGENLBDAPM_HBCCFBAAPPH_OFFSET UNITYSDK_OFFSET(0x15C997D0)
#define HGGENLBDAPM_HFFMFBHGAOL_OFFSET UNITYSDK_OFFSET(0x15C99F90)
#define HGGENLBDAPM_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x15C99550)

	class HGGENLBDAPM : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::GDHCJAOOKDB*>* CNBMIHILLFE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGENLBDAPM_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::GDHCJAOOKDB*>* CCKNAMOGJJB()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::GDHCJAOOKDB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGENLBDAPM_CCKNAMOGJJB_OFFSET))(this);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGENLBDAPM_LDAMHBBILAD_OFFSET))(this);
		}

		::System::String* EJGPEMHBCMC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGENLBDAPM_EJGPEMHBCMC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* HBCCFBAAPPH()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGENLBDAPM_HBCCFBAAPPH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* ACOMBAFFJCH()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGENLBDAPM_ACOMBAFFJCH_OFFSET))(this);
		}

		::System::Void ADFIPDLKAMI(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HGGENLBDAPM_ADFIPDLKAMI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ADFIPDLKAMI_1(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::UnityEngine::Object* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HGGENLBDAPM_ADFIPDLKAMI_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ADFIPDLKAMI_2(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::UnityEngine::Object* a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::UnityEngine::Object*, ::System::Single))((::PBYTE)hIl2Cpp + HGGENLBDAPM_ADFIPDLKAMI_2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void HFFMFBHGAOL(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HGGENLBDAPM_HFFMFBHGAOL_OFFSET))(this, a1, a2, a3);
		}

	};
