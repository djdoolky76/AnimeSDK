#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AOMCJAJOEIC_CTOR_OFFSET UNITYSDK_OFFSET(0x169EB5D0)
#define AOMCJAJOEIC_DEBNDBPNNEC_OFFSET UNITYSDK_OFFSET(0x169EACE0)
#define AOMCJAJOEIC_FIHHGHOOMHF_OFFSET UNITYSDK_OFFSET(0x169EB280)
#define AOMCJAJOEIC_HEFMKBEGAJG_OFFSET UNITYSDK_OFFSET(0x169EB0E0)
#define AOMCJAJOEIC_HKCJPOIFBPO_1_OFFSET UNITYSDK_OFFSET(0x169EB1D0)
#define AOMCJAJOEIC_HKCJPOIFBPO_OFFSET UNITYSDK_OFFSET(0x169EB520)
#define AOMCJAJOEIC_KAGGMAIBEIF_OFFSET UNITYSDK_OFFSET(0x169EAE60)
#define AOMCJAJOEIC_KJABBNPOHCF_OFFSET UNITYSDK_OFFSET(0x169EADD0)
#define AOMCJAJOEIC_ODIBMAEBMBD_OFFSET UNITYSDK_OFFSET(0x169EB120)

inline static constexpr unsigned int AOMCJAJOEIC_TypeDefinitionIndex = 73152;

	class AOMCJAJOEIC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOMCJAJOEIC_CTOR_OFFSET))(this);
		}

		::System::Void DEBNDBPNNEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOMCJAJOEIC_DEBNDBPNNEC_OFFSET))(this);
		}

		::System::String* KJABBNPOHCF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOMCJAJOEIC_KJABBNPOHCF_OFFSET))(this);
		}

		::System::Void KAGGMAIBEIF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AOMCJAJOEIC_KAGGMAIBEIF_OFFSET))(this, a1);
		}

		::System::Void FIHHGHOOMHF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AOMCJAJOEIC_FIHHGHOOMHF_OFFSET))(this, a1);
		}

		::System::Boolean HEFMKBEGAJG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AOMCJAJOEIC_HEFMKBEGAJG_OFFSET))(this);
		}

		::System::Void ODIBMAEBMBD(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + AOMCJAJOEIC_ODIBMAEBMBD_OFFSET))(this, a1, a2);
		}

		::System::Void HKCJPOIFBPO(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + AOMCJAJOEIC_HKCJPOIFBPO_OFFSET))(this, a1, a2);
		}

		::System::Void HKCJPOIFBPO_1(::System::String* a1, ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>>*))((::PBYTE)hIl2Cpp + AOMCJAJOEIC_HKCJPOIFBPO_1_OFFSET))(this, a1, a2);
		}

	};
