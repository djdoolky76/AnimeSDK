#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define ABAEBLGAEDI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3FA600)
#define ABAEBLGAEDI_FGDKCJPMBEG_OFFSET UNITYSDK_OFFSET(0x1C3F9FD0)
#define ABAEBLGAEDI_JCOHKDCAOLF_OFFSET UNITYSDK_OFFSET(0x1C3FA520)
#define ABAEBLGAEDI_PDHDOHAIJKD_OFFSET UNITYSDK_OFFSET(0x1C3F9EC0)

inline static constexpr unsigned int ABAEBLGAEDI_TypeDefinitionIndex = 41516;

	class ABAEBLGAEDI : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::UInt32>** StaticGet_OEAPCKKBJHG()
		{
			return (::Il2CppArray<::System::UInt32>**)UnitySDK::FromName("", "ABAEBLGAEDI")->GetStaticField(0x12460);
		}

		// static const ::System::Object MPEKOHMJBPB; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABAEBLGAEDI_CCTOR_OFFSET))();
		}

		static ::System::Void PDHDOHAIJKD(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ABAEBLGAEDI_PDHDOHAIJKD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FGDKCJPMBEG(::PVOID a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ABAEBLGAEDI_FGDKCJPMBEG_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 JCOHKDCAOLF(::System::String* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Int32(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ABAEBLGAEDI_JCOHKDCAOLF_OFFSET))(a1, a2);
		}

	};
