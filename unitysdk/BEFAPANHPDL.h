#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODLJOLJDLNI.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEFAPANHPDL_CLEAR_OFFSET UNITYSDK_OFFSET(0x163056A0)
#define BEFAPANHPDL_CTOR_OFFSET UNITYSDK_OFFSET(0x16305EC0)
#define BEFAPANHPDL_EGELDBHCJKK_OFFSET UNITYSDK_OFFSET(0x16305AF0)
#define BEFAPANHPDL_HKILPOPCDPJ_OFFSET UNITYSDK_OFFSET(0x16305720)

inline static constexpr unsigned int BEFAPANHPDL_TypeDefinitionIndex = 76353;

	class BEFAPANHPDL : public ::ODLJOLJDLNI
	{
	public:
		::System::Collections::Generic::List_1<::System::Single>* DAMJDAGKAND; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFAPANHPDL_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFAPANHPDL_CLEAR_OFFSET))(this);
		}

		::System::String* HKILPOPCDPJ(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BEFAPANHPDL_HKILPOPCDPJ_OFFSET))(this, a1, a2);
		}

		::System::String* EGELDBHCJKK(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BEFAPANHPDL_EGELDBHCJKK_OFFSET))(this, a1, a2);
		}

	};
