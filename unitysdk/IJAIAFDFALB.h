#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHDCFBBIJIM.h"
namespace System { class String; }

#define IJAIAFDFALB_CIKPBGDIABO_OFFSET UNITYSDK_OFFSET(0x16449BC0)
#define IJAIAFDFALB_CTOR_OFFSET UNITYSDK_OFFSET(0x16449C60)
#define IJAIAFDFALB_IEHFMKKFBPC_OFFSET UNITYSDK_OFFSET(0x16449C10)
#define IJAIAFDFALB_MCFDAKKMPGE_OFFSET UNITYSDK_OFFSET(0x16449B70)
#define IJAIAFDFALB_NJDPOHCOEFF_OFFSET UNITYSDK_OFFSET(0x16449B20)

inline static constexpr unsigned int IJAIAFDFALB_TypeDefinitionIndex = 77553;

	class IJAIAFDFALB : public ::EHDCFBBIJIM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJAIAFDFALB_CTOR_OFFSET))(this);
		}

		::System::Void NJDPOHCOEFF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IJAIAFDFALB_NJDPOHCOEFF_OFFSET))(this, a1);
		}

		::System::Void MCFDAKKMPGE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IJAIAFDFALB_MCFDAKKMPGE_OFFSET))(this, a1);
		}

		::System::Void CIKPBGDIABO(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IJAIAFDFALB_CIKPBGDIABO_OFFSET))(this, a1);
		}

		::System::Void IEHFMKKFBPC(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IJAIAFDFALB_IEHFMKKFBPC_OFFSET))(this, a1);
		}

	};
