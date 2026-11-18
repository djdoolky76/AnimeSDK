#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IHFNNJDJLEM;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define HBKGDHJEIGO_ADPJEOKEDND_OFFSET UNITYSDK_OFFSET(0x14931CD0)
#define HBKGDHJEIGO__CTOR_OFFSET UNITYSDK_OFFSET(0x14931CA0)

inline static constexpr unsigned int HBKGDHJEIGO_TypeDefinitionIndex = 62981;

class HBKGDHJEIGO : public ::System::Object
{
public:
	::System::String* HFEIPMCNCNI; // 0x10
	::Il2CppArray<::System::String*>* DLMBJPMBJKA; // 0x18
	::System::Func_1<::IHFNNJDJLEM*>* IPHMALCJJMI; // 0x20
	::System::Boolean KBEFHMBGKNL; // 0x28
	::System::Boolean MIOBNDILHCI; // 0x29

	::System::Void _ctor(::System::Func_1<::IHFNNJDJLEM*>* FBAELAHNBFP, ::System::String* AELLPLBJELA, ::Il2CppArray<::System::String*>* MOLAJANDLHN, ::System::Boolean HNGJDKJEFMB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::IHFNNJDJLEM*>*, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HBKGDHJEIGO__CTOR_OFFSET))(this, FBAELAHNBFP, AELLPLBJELA, MOLAJANDLHN, HNGJDKJEFMB);
	}

	::System::Void ADPJEOKEDND(::System::Boolean FIPHFGHNNBE, ::System::Boolean IOKNPLAMIKB, ::System::Action* NJJPAJNJFOJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HBKGDHJEIGO_ADPJEOKEDND_OFFSET))(this, FIPHFGHNNBE, IOKNPLAMIKB, NJJPAJNJFOJ);
	}
};
