#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OGEBDDFKPNC_AAOOIGKJNNI_OFFSET UNITYSDK_OFFSET(0x1C4CD970)
#define OGEBDDFKPNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4CD980)
#define OGEBDDFKPNC_FGDKCJPMBEG_OFFSET UNITYSDK_OFFSET(0x1C4CDB40)
#define OGEBDDFKPNC_GCDOMBALANG_OFFSET UNITYSDK_OFFSET(0x1C4CDAD0)

inline static constexpr unsigned int OGEBDDFKPNC_TypeDefinitionIndex = 41506;

	class OGEBDDFKPNC : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* MFMILOFFMAC; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* AKBFAFMNKDG; // 0x18
		::System::Void _ctor(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + OGEBDDFKPNC_CTOR_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* AAOOIGKJNNI()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGEBDDFKPNC_AAOOIGKJNNI_OFFSET))(this);
		}

		::System::String* GCDOMBALANG(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OGEBDDFKPNC_GCDOMBALANG_OFFSET))(this, a1);
		}

		::System::Int32 FGDKCJPMBEG(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OGEBDDFKPNC_FGDKCJPMBEG_OFFSET))(this, a1);
		}

	};
