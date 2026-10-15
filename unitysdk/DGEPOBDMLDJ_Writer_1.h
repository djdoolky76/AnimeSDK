#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGEPOBDMLDJ.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T1, typename T2> class Func_2; }

inline static constexpr unsigned int DGEPOBDMLDJ_Writer_1_TypeDefinitionIndex = 6544;

	template <typename T>
	class DGEPOBDMLDJ_Writer_1 : public ::System::Object
	{
	public:
		static ::System::Func_2<T, ::DGEPOBDMLDJ>** StaticGet_InternalInvoke()
		{
			return (::System::Func_2<T, ::DGEPOBDMLDJ>**)UnitySDK::FromName("", "Writer`1")->GetStaticField(0x0);
		}

		static ::System::Func_2<T, ::DGEPOBDMLDJ>** StaticGet_Default()
		{
			return (::System::Func_2<T, ::DGEPOBDMLDJ>**)UnitySDK::FromName("", "Writer`1")->GetStaticField(0x0);
		}

	};
