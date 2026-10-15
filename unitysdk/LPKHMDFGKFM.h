#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class LPKHMDFGKFM;
namespace System { class String; }

#define LPKHMDFGKFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0FCD30)
#define LPKHMDFGKFM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0FCB70)

inline static constexpr unsigned int LPKHMDFGKFM_TypeDefinitionIndex = 13967;

	class LPKHMDFGKFM : public ::System::Object
	{
	public:
		::System::String* OCOBPNMHGIO; // 0x10
		::Il2CppArray<::System::UInt32>* JLCMIFIDGNF; // 0x18
		::System::UInt32 CNHMEJDOMAK; // 0x20
		::System::UInt32 PHKHAFCBGMH; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKHMDFGKFM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LPKHMDFGKFM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LPKHMDFGKFM*))((::PBYTE)hIl2Cpp + LPKHMDFGKFM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
