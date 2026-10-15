#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

	class IGNPKBNCDEP : public ::System::Object
	{
	public:
		::System::Collections::Generic::Stack_1<::System::Object*>* PLPNIKALEBA; // 0x0
		::System::Int32 GLLLIKDBLCL; // 0x0
		static ::System::Int32* StaticGet_NPLHPOIFCDC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IGNPKBNCDEP")->GetStaticField(0x0);
		}

	};
