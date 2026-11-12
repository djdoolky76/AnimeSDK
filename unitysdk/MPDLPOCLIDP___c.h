#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MPDLPOCLIDP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8DA230)
#define MPDLPOCLIDP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DA270)
#define MPDLPOCLIDP___C___ROLLDICEBYPRESET_B__8_0_OFFSET UNITYSDK_OFFSET(0x1D8DA280)

inline static constexpr unsigned int MPDLPOCLIDP___c_TypeDefinitionIndex = 37433;

	class MPDLPOCLIDP___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>, ::System::String*>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0xEC80);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xEC88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPDLPOCLIDP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDLPOCLIDP___C_CTOR_OFFSET))(this);
		}

		::System::String* __RollDiceByPreset_b__8_0(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32> a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + MPDLPOCLIDP___C___ROLLDICEBYPRESET_B__8_0_OFFSET))(this, a1);
		}

	};
