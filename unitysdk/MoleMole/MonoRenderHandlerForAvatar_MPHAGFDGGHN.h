#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoRenderHandlerForAvatar; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_MPHAGFDGGHN__CTOR_OFFSET UNITYSDK_OFFSET(0x15AC4100)

namespace MoleMole
{
	inline static constexpr unsigned int MonoRenderHandlerForAvatar_MPHAGFDGGHN_TypeDefinitionIndex = 52706;

	class MonoRenderHandlerForAvatar_MPHAGFDGGHN : public ::System::Object
	{
	public:
		::System::String* OMACLKGLLJH; // 0x10
		::MoleMole::MonoRenderHandlerForAvatar* AMNIHACKELI; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* NFJOEHLHIKM; // 0x20
		::System::Int32 KLFCAICBBGH; // 0x28
		::System::Int32 PPAHPJHHMNB; // 0x2C
		::System::Int32 KEDIENDBKPM; // 0x30
		::System::Int32 BOCOHFKBOLI; // 0x34
		::System::Int32 DFJAGCHIIHD; // 0x38
		::System::Int32 JOPGMOJBMCH; // 0x3C
		::System::UInt32 LBPIPEAKPDG; // 0x40
		::System::Int32 EKOHIAJDIEC; // 0x44
		::System::Int32 APLEKECLBHN; // 0x48
		::System::Int32 HKBBMLEAOIK; // 0x4C
		::System::Boolean HCHLFBOGBCK; // 0x50
		::System::Boolean IODPPMOKFPI; // 0x51
		::System::Byte _padding0[0x2];
		::System::Int32 JBNIIHBJAJD; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_MPHAGFDGGHN__CTOR_OFFSET))(this);
		}
	};
}
