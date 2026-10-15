#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	enum class WebHeaderCollectionType : ::System::UInt16
	{
		Unknown = 0,
		WebRequest = 1,
		WebResponse = 2,
		HttpWebRequest = 3,
		HttpWebResponse = 4,
		HttpListenerRequest = 5,
		HttpListenerResponse = 6,
		FtpWebRequest = 7,
		FtpWebResponse = 8,
		FileWebRequest = 9,
		FileWebResponse = 10,
	};
}
