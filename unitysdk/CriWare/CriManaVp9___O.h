#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

namespace CriWare
{
	class CriManaVp9___O : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__0___SetupVp9Decoder()
		{
			return (::System::Action**)UnitySDK::FromName("CriWare", "<>O")->GetStaticField(0x587B0);
		}

	};
}
