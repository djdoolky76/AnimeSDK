#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MPDLPOCLIDP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7588D0)
#define MPDLPOCLIDP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C758910)
#define MPDLPOCLIDP___C___ROLLDICEBYPRESET_B__8_0_OFFSET UNITYSDK_OFFSET(0x1C758920)

inline static constexpr unsigned int MPDLPOCLIDP___c_TypeDefinitionIndex = 36505;

	class MPDLPOCLIDP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x160B0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>, ::System::String*>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x160B8);
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
