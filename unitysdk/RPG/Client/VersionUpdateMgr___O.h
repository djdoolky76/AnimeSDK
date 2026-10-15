#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGDELEAHIJO;
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	class VersionUpdateMgr___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::HGDELEAHIJO*, ::System::Boolean>** StaticGet__0___IsPreDownloadAsset()
		{
			return (::System::Func_2<::HGDELEAHIJO*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x4A3B0);
		}

	};
}
